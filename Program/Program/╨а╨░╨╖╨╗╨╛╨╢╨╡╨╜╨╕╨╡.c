/*		
          90    | 2
          45    | 3
          15    | 3
          5     | 5   
	1     | 
*/
#include <stdio.h>
void print_number_factors(int x){
printf("Numbers factors: ");
int divizor =2;
while(x!=1){
//А можно и так
/*
	if(x%divizor==0){
printf(" %d",divizor);
	x/=divizor;
}
else
         divizor++;
}
*/
	
///*
while(x%divizor==0){
printf(" %d",divizor);
	x/=divizor;
}
         divizor++;
}
//*/
printf("\n");
}

int main(){
int x;
printf("Enter number factorize: ");
scanf("%d",&x);
print_number_factors(x);
	}
