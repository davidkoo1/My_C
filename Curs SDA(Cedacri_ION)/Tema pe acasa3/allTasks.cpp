#include <bits/stdc++.h>

int tasks = 2;
void NewTask()
{
	printf("\n\n=====Task%d======\n\n", tasks);
	tasks++;
}

void Task1()
{
	int arr[] = {1 , 2, 3, 4, 5};
	for(int i = 0; i< sizeof(arr)/sizeof(arr[0]); i++)
		printf("%d ", arr[i]);
		
	NewTask();
}

void Task2()
{
	char arr[] = {'a' , 'b', 'C', 'd', 'f'};
		printf("%d ", sizeof(arr)/sizeof(arr[0]));
		
	NewTask();
}

void Task4()
{
	int arr1[] = {1 , 2, 3, 4, 5};
	int arr2[] = {6 , 7, 8, 9, 10};
	int total = 0;
	for(int i = 0; i< sizeof(arr2)/sizeof(arr2[0]); i++)
		total += arr1[i] * arr2[i];
	
	printf("%d", total);
	
	NewTask();
}


void Task5()
{
	int arr1[] = {1 , 2, 3};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	for(int i = 0; i < n; i++)
		printf("%d ", arr1[n - 1 - i]);
	
	NewTask();
}

void Task6()
{
	int n = 0, sum = 0;
	printf("Input size of array >> ");
	scanf("%d", &n);
	int arr1[n];
	
	for(int i = 0; i < n; i++)
		scanf("%d", &arr1[i]);
	
	for(int i = 0; i < n; i++)
		sum += arr1[i];
	printf("%d ", sum);
	
	NewTask();
}

void Task8()
{
	int number, size = 5;
	int *arr;
	arr = (int*)malloc(size * sizeof(int));
	
	printf("Input number>> ");
	scanf("%d", &number);
	
	for(int i = 0; i < size; i++)
	{
		*(arr + i) = number;
	}
	
	
    for(int i = 0; i < size; i++)
		printf("%d ", *(arr + i));
		
	NewTask();
}


void Task10()
{
	int arr[] = {3 , -2, 3, 3, 10, 5};
	int n = sizeof(arr)/sizeof(arr[0]), number, count = 0;
	
	
	printf("Input number>> ");
	scanf("%d", &number);
	
	
    for(int i = 0; i < n; i++)
		if(arr[i] == number)
			count++;
	
	printf("%d", count);
		
	NewTask();
}

void Task11()
{
	int arr[] = {3 , -2, 3, 3, 10, 5, 7, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int *newArr;
	newArr = (int*)malloc(n * sizeof(int));
	
    for(int i = 0; i < n; i++)
    	*(newArr + i) = arr[i];
    	
	for(int i = 0; i < n; i++)
		printf("%d ", *(newArr + i));
		
	NewTask();
}


void Task12()
{
	int n = 5;
	int *arr;
	arr = (int*)malloc(n * sizeof(int));
	
	printf("Input 5 elemente\n");
    for(int i = 0; i < n; i++)
    	scanf("%d", arr+i);
    	
	printf("Primu = %d\nUltimu = %d", *arr, *(arr + n - 1));
		
	NewTask();
}

void Task14()
{
	int arr[] = {3 , -2, 3, 3};
	int n = 4;
	
	printf("Tablou ne modificat\n");
	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
		arr[i] *= 3;
	}
		
	printf("\nTablou modificat\n");
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	
	NewTask();
}

void TaskAvansat()
{
	int arr[] = {3 , -2, 3, 1, 10, 5};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	printf("Unsorting array:\n");
    for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	
	for (int i = 0; i < size - 1; i++)
	{
        for (int j = 0; j < size - i - 1; j++)
		{
            if (arr[j] > arr[j + 1])
			{
                // swap using pointeri
                int temp = *(arr + j); //Element - arr[j]
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
    
    printf("\nSorting array:\n");
    for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

main()
{
	Task1();
	
	Task2();
	
	Task4();
	
	Task5();
	
	Task6();
	
	Task8();
	
	Task10();
	
	Task11();
	
	Task12();
	
	Task14();
	
	TaskAvansat();
	
}