//Числа в обратном порядке
#include <stdio.h>
int main(){
int x;
	printf("Enter number\n");
scanf("%d",&x);
while(x){
	int d =x%10;
//if(/*d%2==1*//*d<5*/)//Показывает нечётные числа
	printf(" %d",d);
	x/=10;
}
	
	
}
