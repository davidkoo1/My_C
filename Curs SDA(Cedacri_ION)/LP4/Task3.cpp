#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <malloc.h>
#include <map>
#include <iostream>

using namespace std;

struct OperatiuneBancara {
	char codBanca[7];
	char codfiliala[5];
	char codClient[12];
	char dataOperatiune[11];
	double sumaOperatiune;

	void write()
	{
		printf("\ncodBanca:  %s\n", codBanca);
		printf("codFiliala: %s\n", codfiliala);
		printf("codClient:  %s\n", codClient);
		printf("dataOperatiune:  %s\n", dataOperatiune);
		printf("sumaOperatiune:  %lf\n", sumaOperatiune);
	}

	struct OperatiuneBancara* next;



};


struct OperatiuneBancara* head = NULL;

void vizualizare()
{
	struct OperatiuneBancara* current = head;

	while (current != NULL)
	{
		current->write();

		current = current->next;
	}
	printf("\n");
	return;
}


void addToLeft(char* codBanca, char* codFiliala, char* codClient, char* dataOperatiune, double suma)
{
	struct OperatiuneBancara* item = NULL;
	item = (struct OperatiuneBancara*)malloc(sizeof(struct OperatiuneBancara));

	strcpy(item->codBanca, codBanca);
	strcpy(item->codClient, codClient);
	strcpy(item->codfiliala, codFiliala);
	strcpy(item->dataOperatiune, dataOperatiune);
	item->sumaOperatiune = suma;


	item->next = head;
	head = item;
	return;
}


void deleteToRight()
{

	struct OperatiuneBancara* current = head, *tmp;
	if (current == NULL)
	{
		printf("List clear\n");
		return;
	}
	if (current->next == NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
		return;
	}


	while (current->next->next != NULL)
		current = current->next;
	tmp = current->next;
	current->next = NULL;
	free(tmp);


	return;
}


void DeleteAll()
{
    while (head != NULL)
    {
        deleteToRight();
    }
}




void Task3()
{
	struct OperatiuneBancara* current = head;
	map<string, int> bancFilialaCount;
	map<string, double> bancFilialaSum;
	string arr[12] = {""};
	int j = 0;
	while (current != NULL)
	{
		string str = (string)current->codBanca + (string)current->codfiliala;
		bancFilialaSum[str] += current->sumaOperatiune;
		
		bool isUniq = true;
		for(int i = 0; i <= j; i++)
		{
			if(str + (string)current->codClient == arr[i])
			{
				isUniq = false;
				j++;
				break;
			}
		}
		
		if(isUniq)
		{
			bancFilialaCount[str] += 1;
			arr[j] = str + (string)current->codClient;
			j++;
		}
			
	
		
		current = current->next;
	}
	
	
	FILE *f = NULL;
	f = fopen("out.txt", "w");
	if(f == NULL)
	{
		printf("Error file input\n");
		return;	
	}
	
	for (const auto& element : bancFilialaCount)
		fprintf(f, "%s\t%d\t%lf\n", element.first.c_str(), element.second, bancFilialaSum[element.first.c_str()]);
	printf("Outputfile\n\n\n");
	fclose(f);
	



    
    return;

}



int main()
{


	int k;
	char codBanca[7];
	char codFiliala[5];
	char codClient[12];
	char dataOperatiune[11];
	double sumaOperatiune;

	while (true)
	{
		printf("1 - printStruct\n");
		printf("2 - addToLeft\n");
		printf("3 - delete last element\n");
		printf("4 - delete All\n");
		printf("5 - Task3\n");
		printf("0 - exit\n");

		scanf("%d", &k);
		switch (k)
		{
			case 1: vizualizare(); break;
			case 2:
			{
				/*printf("codBanca : "); scanf("%s", codBanca);
				printf("codClient : "); scanf("%s", codClient);
				printf("dataOperatiune : "); scanf("%s", dataOperatiune);
				printf("sumaOperatiune : "); scanf("%lf", &sumaOperatiune);
				*/
				FILE *f = NULL;
				f = fopen("operatii2.txt", "r");
				if(f == NULL)
				{
					printf("Error file input\n");
					return 0;	
				}
				char line[60];
				while (fgets(line, sizeof(line), f) != NULL)
				{
					
					sscanf(line, "%5s;%3s;%10s;%10s;%lf", codBanca, codFiliala, codClient, dataOperatiune, &sumaOperatiune);
					addToLeft(codBanca, codFiliala, codClient, dataOperatiune, sumaOperatiune);
				}
				fclose(f);
				break;
			}
			case 3:
			{
				deleteToRight();
				break;
			}
			case 4:
			{
				DeleteAll();
				break;	
			}
			case 5:
			{
				Task3();
				break;
			}
			case 0:
			{
				return 0;
			}
		}
	}


	return 0;
}