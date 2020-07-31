//Выделение массива 
#include <stdio.h>
#include <stdlib.h>
int main()
{/*Эта программа выделяет около 1мб ---> что значит около 1000000 б
	int N;
printf("Enter number and clear array new: ");
	scanf("%d",N);
char A[N];
	printf("Array successfully created!");
system("pause");
	return 0;
	*/
	
/*Эта программа выделяет около
//1,5Г--1500000000б 
	*//*
	int N;
printf("Enter number and clear array new: ");
	scanf("%d",N);
char *A=(char *)malloc(N);
	if(NULL==A)
	{
printf("OS didn't gave memory. Exit...\n");	
	exit(1);
	}
for(int i=0;i<N;i++)
A[i]=i;
	printf("Array successfully created!");
system("pause");
	return 0;
	*/
//------------	
/*Эта программа выделяет около
//1,5Г--1500000000б и ещё можно попробовать
 добавить с верху, если программа даст эту 
возможность 
	*/	
/*	
	int N;
printf("Enter number and clear array new: ");
	scanf("%d",N);
char *A=(char *)malloc(N);
	if(NULL==A)
	{
printf("OS didn't gave memory. Exit...\n");	
	exit(1);
	}
for(int i=0;i<N;i++)
A[i]=i;

	printf("Array A successfully created!");

system("pause");
	char *B=(char *)malloc(N);
	if(NULL==B)
	{
printf("OS didn't gave memory. Exit...\n");	
	exit(1);
	}
for(int i=0;i<N;i++)
B[i]=i;

	printf("Array B successfully created!");

system("pause");
	return 0;
	*/
	
	
	
/*
	int N;
printf("Enter number and clear array new: ");
	scanf("%d",N);
int *A=(char *)malloc(N*sizeof(int));
	if(NULL==A)
	{
printf("OS didn't gave memory. Exit...\n");	
	exit(1);
	}
for(int i=0;i<N;i++)
A[i]=i;

	printf("Array  successfully created!");

system("pause");
	return 0;
*/
int N;
printf("Enter number and clear array new: ");
	scanf("%d",N);
	for(int k=0;k<1000;k++){
int *A=(char *)malloc(N*sizeof(int));
	if(NULL==A)
	{
printf("OS didn't gave memory. Exit...\n");	
	exit(1);
	}
for(int i=0;i<N;i++)
A[i]=i;
	free(A);
}
	printf("Array  successfully created!");

system("pause");
	return 0;
	
}
