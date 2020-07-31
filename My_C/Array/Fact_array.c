//Разложение числа
/*Например:
Enter number to factorize: 90
2 3 3 5 
*/
#include <stdio.h>
int number(int x, int A[]){
int t=0;
int d=2;
	while(x!=1)
	{
	while(x%d==0)
	{
		A[t]=d;
		t+=1;
		x/=d;
	}
d+=1;	
	}
return t;
	
}

int main(){
int x;
	printf("Enter number to factorize: ");
	scanf("%d",&x);
int A[100];
int N;
N=number(x, A);
	for(int i=0;i<N;i++)
	printf("%d ",A[i]);
	return 0;
	
	
}
