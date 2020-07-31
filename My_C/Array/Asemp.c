/*Асимптотика сортировок.
Сортировка подсчётом*/
#include <stdio.h>
#include <stdbool.h>
#include <iso646.h>
int ter (int A[], int N){
	for(int i=0;i<N;i++)
printf("%3d",A[i]);
	printf("\n");
}
int main(){
	
	int c[10]={0};
	int x;
while(true)
{
scanf("%d",&x);
	if(x==10)break;
	if(x<10 or x>9)continue;
	c[x]+=1;
}
for(x=0;x<10;++x)
	for(int i = 0;i<c[x] ;i++)
		printf("%d",x);
	return 0;
}
