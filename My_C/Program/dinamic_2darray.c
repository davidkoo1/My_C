#include <stdio.h>
#include <stdlib.h>
void dap(int **A,size_t N, size_t M){
	for(int i=0;i<N;i++){
for(int j=0;j<M;j++){
printf("%*d",5,A[i][j]);	
	}	
printf("\n");
	}
}
int **daa(size_t N,size_t  M)
{
	int **A=(int **)malloc(N*sizeof(int *));
	for(int i=0;i<N;i++)
{
A[i]=(int *)malloc(M*sizeof(int));	
	}
return A;
}
void daf(int **A,size_t N)
{
	for(int i=0;i<N;i++){
		free(A[i]);	
	}
free(A);
}
void dat(size_t N ,size_t M){
int **A=daa(N,M);
	int x=1;
	for(int i =0;i<N;i++){
	    for(int j=0;j<M;j++){
	    A[i][j]=x;
	    	x+=1;	
	    }	
	}
dap(A,N,M);
	printf("\n Pointer to lines: ");
for(int **p=A;p<A+3;p++)
	printf("%30d",(long int)*p);
printf("\n Direct memory adress:\n");
	for(int *p=(int*)*A;p<(int*)*A+25;p++)
printf("%d\t", *p);
	daf(A,N);
}
int main(){
	int m_h=4;
	int m_w=5;
	
dat(m_h,m_w);
	return 0;
}
