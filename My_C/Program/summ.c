//Индуктивные функции
//Складывает числа 123=6,1+2+3
#include <stdio.h>
int main(){
int x;
printf("Enter your numbers: ");
scanf(" %d\n",&x);
int s=0;
while(x)
{
int d=x%10;
	s+=d;
x/=10;
	
}
	
printf("Summ your numbers= %d\n",s);
	
	
	return 0;
}
