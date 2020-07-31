/*Как вывести массив на экран*/
//От 0 не включая N
#include <stdio.h>
#define N 7
#define K 10
int main(){
int x[N]={25,9,13,459,2,79,9};
for(int i=0;i<N;++i)
	printf("%d",x[i]);
printf("\n");
int A[K]={0};
for (int a=0;a<K;++a)
//A[a]=a; С 0 до //К, не включая К
//A[a] = K-a-1; //с К до 0
/*или так, действия схоже*/  
//A[K-a-1]=a;//с К до 0
//A[a]=a%2; //Чередуется 0 и 1
//(%-остаток от деления)

for (int a=0;a<K;++a)
printf("%d\t", A[a]);
}
