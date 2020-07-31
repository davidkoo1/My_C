/*Проверка/Например:
4 115 7 195 25 106 Ввод
4 2 7 2 25 106  Вывод 
*/
#include <stdio.h>
#define  N 6
int main(){
	int a[N];
	int i,j,k;
for(i=0;i<N;i++)
scanf("%d",&a[i]);	
k=0;
for(i=0;i<N;i++)
	if(a[i]>100 && a[i]%5==0)
	k++;
for(i=0;i<N;i++)
{
	if(a[i]>100 && a[i]%5==0)
	a[i]=k;
printf("%d ",a[i]);
}
}
