#include <stdio.h>
int main(int argv, char* argc[])
{
int i=0;
int *pi=&i;
int **ppi=&pi;
int ***pppi=&ppi;
	printf("%d\n",i);
	*pi=10;
	printf("%d\n",i);
	**ppi=20;
	printf("%d\n",i);
	***pppi=30;
	printf("%d\n",i);
	
printf("||||||||\n");	
int A[]={0,1,2,3,4,5,6,7,8,9};
printf("%d\n",*A);
int *p=A+5;
printf("%d\n",p[-1]);
int *q=A+7;
if(p>q)
printf("p>q\n");
else
printf("p<=q\n");

printf("p-q= %d",p-q);
	return 0;
	
}