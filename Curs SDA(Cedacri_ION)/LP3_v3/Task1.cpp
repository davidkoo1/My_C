#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <malloc.h>

int n = 0; //for sort

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
	n++;
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

void printSpecialClient(char* Client)
{
	struct OperatiuneBancara* current = head;
	bool isExist = false;
	while (current != NULL)
	{

		if (strcmp(current->codClient, Client) == 0)
		{
			current->write();
			isExist = true;
		}

		current = current->next;
	}
	if (!isExist)
		printf("Dont have this client\n");
	else
		printf("\n");
	return;
}

void printTotalSumSpecialClient_Period(char* Client, char* Data)
{
	struct OperatiuneBancara* current = head;
	double sum = 0;
	bool isExist = false;
	while (current != NULL)
	{

		if (strcmp(current->codClient, Client) == 0 && strcmp(current->dataOperatiune, Data) == 0)
		{
			sum += current->sumaOperatiune;
			isExist = true;
		}


		current = current->next;
	}
	if (isExist)
		printf("Suma totala: %lf a clientului: %s de data: %s\n", sum, Client, Data);
	else
		printf("Dont have this client and data operation\n");

	return;
}

void PrintSortBySumaDesc()
{
	struct OperatiuneBancara* current = head;
	int i = 0;
	struct OperatiuneBancara* operations = NULL;
	operations = (struct OperatiuneBancara*)malloc(sizeof(struct OperatiuneBancara) * n);

	while (current != NULL)
	{
		operations[i] = *current;

		current = current->next;
		i++;
	}

	for (int j = 0; j < i; j++)
	{
		float tmp = INT_MIN;
		int pos = 0;
		for (int k = j; k < i; k++)
		{
			double res = operations[k].sumaOperatiune;
			if (tmp < res)
			{
				tmp = res;
				pos = k;
			}
		}

		struct OperatiuneBancara box = operations[j];
		operations[j] = operations[pos];
		operations[pos] = box;
	}

	for (int j = 0; j < i; j++)
	{
		printf("\ncodBanca:  %s\n", operations[j].codBanca);
		printf("codClient:  %s\n", operations[j].codClient);
		printf("dataOperatiune:  %s\n", operations[j].dataOperatiune);
		printf("sumaOperatiune:  %lf\n", operations[j].sumaOperatiune);
	}
	printf("\n");
}

void SortBySumaDescInMainList()
{
	if (n == 0)
	{
		printf("List is empty.\n");
		return;
	}

	struct OperatiuneBancara* sortedList = NULL;
	struct OperatiuneBancara* current = head;

	while (current != NULL)
	{
		struct OperatiuneBancara* newItem = (struct OperatiuneBancara*)malloc(sizeof(struct OperatiuneBancara));
		*newItem = *current;

		if (sortedList == NULL || newItem->sumaOperatiune >= sortedList->sumaOperatiune)
		{
			newItem->next = sortedList;
			sortedList = newItem;
		}
		else
		{
			struct OperatiuneBancara* temp = sortedList;
			while (temp->next != NULL && newItem->sumaOperatiune < temp->next->sumaOperatiune)
			{
				temp = temp->next;
			}
			newItem->next = temp->next;
			temp->next = newItem;
		}

		current = current->next;
	}

	while (head != NULL)
	{
		struct OperatiuneBancara* temp = head;
		head = head->next;
		free(temp);
	}

	head = sortedList;

	printf("List sorted by sumaOperatiune in descending order and saved in the main list.\n");
	vizualizare();
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
		printf("4 - Operations Special Client\n");
		printf("5 - Suma tottala a Clientului in dataOperation\n");
		printf("6 - Print with Sort dy Desc sum, WITH OU SAVE\n");
		printf("7 - Print with Sort dy Desc sum, WITH SAVE\n");
		printf("0 - exit\n");

		scanf("%d", &k);
		switch (k)
		{
		case 1: vizualizare(); break;
		case 2:
		{
			printf("codBanca : "); scanf("%s", codBanca);
			printf("codClient : "); scanf("%s", codClient);
			printf("dataOperatiune : "); scanf("%s", dataOperatiune);
			printf("sumaOperatiune : "); scanf("%lf", &sumaOperatiune);

			addToLeft(codBanca, codClient, dataOperatiune, sumaOperatiune);
			break;
		}
		case 3:
		{
			deleteToRight();
			break;
		}
		case 4:
		{
			printf("codClient : "); scanf("%s", codClient);

			printSpecialClient(codClient);

			break;
		}
		case 5:
		{
			printf("codClient : "); scanf("%s", codClient);
			printf("dataOperatiune : "); scanf("%s", dataOperatiune);

			printTotalSumSpecialClient_Period(codClient, dataOperatiune);

			break;
		}
		case 6:
		{

			PrintSortBySumaDesc();
			break;
		}
		case 7:
		{
			SortBySumaDescInMainList();
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