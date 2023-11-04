#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <malloc.h>
#include <map>
#include <iostream>

using namespace std;

struct OperatiuneBancara {
	char codBanca[6];
	char codClient[11];
	char dataOperatiune[11];
	double sumaOperatiune;

	void write()
	{
		printf("\ncodBanca:  %s\n", codBanca);
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


void addToLeft(char* codBanca, char* codClient, char* dataOperatiune, double suma)
{
	struct OperatiuneBancara* item = NULL;
	item = (struct OperatiuneBancara*)malloc(sizeof(struct OperatiuneBancara));

	strcpy(item->codBanca, codBanca);
	strcpy(item->codClient, codClient);
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




void Task1()
{
	struct OperatiuneBancara* current = head;
	map<string, float> bancClientSuma;
	map<string, int> bancCount;
	while (current != NULL)
	{
		string str = (string)current->codBanca + (string)current->codClient;
		bancClientSuma[str] +=  current->sumaOperatiune;
		bancCount[(string)current->codBanca] += 1;
		
		current = current->next;
	}
	
	/*
	for (const auto& element : bancClientSuma)
		printf("%s\t%lf\n", element.first.c_str(), element.second);
	printf("\n\n\n");
	*/
	
    for (const auto& countPair : bancCount)
	{
        double sum = 0;
        for (const auto& entry : bancClientSuma)
		{
            if (entry.first.substr(0, countPair.first.size()) == countPair.first)
			{
				printf("%s\t%lf\n", entry.first.c_str(), entry.second);
                sum += entry.second;
            }
        }
        printf("%s\t%lf\n", (countPair.first + "9999999999").c_str(), sum);
    }



    
    return;

	//1 1 2 3 3
	//1 2 3

}


void Task2()
{
	struct OperatiuneBancara* current = head;
	map<string, float> bancClientSuma;
	map<string, float> bancSum;
	while (current != NULL)
	{
		string fulldata = (string)current->dataOperatiune;
		string month = fulldata.substr(3, 2).c_str();
		string str = (string)current->codBanca + ";" + (string)current->codClient + ";" + month +";";
		
		if(current->sumaOperatiune > 5000)
		{
			bancClientSuma[str] += 0.05f * (current->sumaOperatiune - 5000);
			bancSum[(string)current->codBanca] += 0.05f * (current->sumaOperatiune - 5000);
		}
		else
		{
			bancClientSuma[str] += 0;
			bancSum[(string)current->codBanca] += 0;
		}
		
		current = current->next;
	}
	
	for (const auto& element : bancClientSuma)
	{
		printf("%s\t%0.2lf\n", element.first.c_str(), (element.second/ 10));

	}
	printf("\n\n");
	
	for (const auto& element : bancSum)
	{
		printf("%s\t%0.2lf\n", element.first.c_str(), (element.second/ 10));

	}
	
	return;
}

int main()
{


	int k;
	char codBanca[6];
	char codClient[11];
	char dataOperatiune[11];
	double sumaOperatiune;

	while (true)
	{
		printf("1 - printStruct\n");
		printf("2 - addToLeft\n");
		printf("3 - delete last element\n");
		printf("4 - delete All\n");
		printf("5 - Task1\n");
		printf("6 - Task2\n");
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
				f = fopen("operatii.txt", "r");
				if(f == NULL)
				{
					printf("Error file input\n");
					return 0;	
				}
				char line[60];
				while (fgets(line, sizeof(line), f) != NULL)
				{
					
					sscanf(line, "%5s %10s %10s %lf", codBanca, codClient, dataOperatiune, &sumaOperatiune);
					addToLeft(codBanca, codClient, dataOperatiune, sumaOperatiune);
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
				Task1();
				break;
			}
			case 6:
			{
				Task2();
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