#include <stdio.h>
//Простые числа крч
#define  N 16
int main(){
int a[N] ={0};
   for(int i =2;i*i<N;i++)
      if(a[i]==0)
   for(int k =i*i;k<N;k+=i)
       a[k]=1;
  for(int i =0;i<N;i++)
  printf("%3d",i); 
      printf("\n");
        for(int i=0;i<N;i++)
            printf("%3d",a[i]);
  printf("\n");
printf("Prime numbers/Простые числа:\n");
for(int i =0;i<N;i++)
    if(a[i]==0)
  printf("%3d",i); 
printf("\n");
printf("0 - prime(простые), 1 - no prime(непростые)" );
return 0;
}
