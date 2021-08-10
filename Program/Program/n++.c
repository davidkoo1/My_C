//Индуктивные функции
#include <stdio.h>
int main(){
int x;
printf("Enter numbers \n");
	scanf("%d",&x);
int n=0;
while(x){
int d=x%10;
++n;
x/=10;
}
	printf("%d",n);
	
}
//Сколько чисел 
