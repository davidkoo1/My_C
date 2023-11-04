#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <malloc.h>
#include <map>
#include <iostream>

using namespace std;

struct BancaClientId {
	char codBanca[6];
	char codClient[11];
	char IdOperatiune[14];

	void write()
	{
		printf("\ncodBanca:  %s\n", codBanca);
		printf("codClient:  %s\n", codClient);
		printf("IdOperatiune:  %s\n", IdOperatiune);
	}

	struct BancaClientId* next;

};
struct BancatOperatieId {
	char codBanca[6];
	char IdOperatiune[14];
	double sumaOper;

	void write()
	{
		printf("\ncodBanca:  %s\n", codBanca);
		printf("IdOperatiune:  %s\n", IdOperatiune);
		printf("sumaOper:  %lf\n", sumaOper);
	}

	struct BancatOperatieId* next;

};

struct BancaClientId* headClientBanc = NULL;
struct BancatOperatieId * headOperatiuneBanc = NULL;

void vizualizare()
{
	struct BancaClientId* current1 = headClientBanc;
	struct BancatOperatieId* current2 = headOperatiuneBanc;

	while (current1 != NULL)
	{
		current1->write();

		current1 = current1->next;
	}
	printf("\n\n\n");
	while (current2 != NULL)
	{
		current2->write();

		current2 = current2->next;
	}
	printf("\n\n\n");
	return;
}


void addBancatOperatieId(char* codBanca, char* IdOperatiune, double suma)
{
	struct BancatOperatieId* item = NULL;
	item = (struct BancatOperatieId*)malloc(sizeof(struct BancatOperatieId));

	strcpy(item->codBanca, codBanca);
	strcpy(item->IdOperatiune, IdOperatiune);
	item->sumaOper = suma;


	item->next = headOperatiuneBanc;
	headOperatiuneBanc = item;
	return;
}


void addBancaClientId(char* codBanca, char* codClient, char* IdOperatiune)
{
	struct BancaClientId* item = NULL;
	item = (struct BancaClientId*)malloc(sizeof(struct BancaClientId));

	strcpy(item->codBanca, codBanca);
	strcpy(item->codClient, codClient);
	strcpy(item->IdOperatiune, IdOperatiune);


	item->next = headClientBanc;
	headClientBanc = item;
	return;
}

void Task4()
{
	//1 2 3 4
	//2 3 1 4
    struct BancaClientId* current1 = headClientBanc;
	struct BancatOperatieId* current2 = headOperatiuneBanc;

	while (current1 != NULL)
	{
		
		while (current2 != NULL)
		{
			if(strcmp(current1->IdOperatiune, current2->IdOperatiune) == 0)
				printf("%s\t%s\t%lf\n", current1->codBanca, current1->codClient, current2->sumaOper);
			
			current2 = current2->next;
		}
		current1 = current1->next;
		current2 = headOperatiuneBanc;
	}
    return;

}



int main()
{


	int k;
	char codBanca[7];
	char operatiuneId[14];
	char codClient[12];
	double sumaOperatiune;

	while (true)
	{
		printf("1 - printStruct\n");
		printf("2 - addToLeft\n");
		printf("5 - Task4\n");
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
				f = fopen("operatii3.txt", "r");
				if(f == NULL)
				{
					printf("Error file input\n");
					return 0;	
				}
				char line[60];
				while (fgets(line, sizeof(line), f) != NULL)
				{
					
					sscanf(line, "%5s %10s %13s", codBanca, codClient, operatiuneId);
					addBancaClientId(codBanca, codClient, operatiuneId);
				}
				fclose(f);
				f = fopen("operatii4.txt", "r");
				if(f == NULL)
				{
					printf("Error file input\n");
					return 0;	
				}
				while (fgets(line, sizeof(line), f) != NULL)
				{
					
					sscanf(line, "%5s %13s %lf", codBanca, operatiuneId, &sumaOperatiune);
					addBancatOperatieId(codBanca, operatiuneId, sumaOperatiune);
				}
				break;
			}
			case 5:
			{
				Task4();
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