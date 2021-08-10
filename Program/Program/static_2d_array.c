#include <stdio.h>
#include <stdlib.h>
#define  M 4
#define  W 5
void static_d(int A[] [W], size_t N)
{
	for(int i=0;i<N;i++){
		for(int j=0;j<W;j++){
printf("%*d",5,A[i][j]);
			}
		}
		printf("\n");
	}

void static_t(size_t N)
{
	int A[N][W];
	int x=1;
	for(int i=0;i<N;i++){
for(int j=0;j<W;j++){
A[i][j]=x;
x+=1;	
}	
	}
static_d(A,N);
printf("\n Direct memory access:\n");
	for(int *p=(int*)A;p<(int*)A+20;p++)
	printf("% d",*p);
printf("\n\n");
}
int main()
{
	static_t(M);
}
