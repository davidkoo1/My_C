//присваиваем любому массиву, любое значение
#include <stdio.h>
#include <conio.h>
int main(){
//вместо 1000 можно менять значения 	
int arr[1000];
int i;
	for(i=0;i<=1000;i++)
	{
arr[i] =rand() % 1000;	
	}
	
for(i=0;i <=1000;i++)
{
	//printf("%d\n",arr[i]);
	printf("arr[%d] = %d\n",i,arr[i]);
}
getch();
	
return 0;
	}
