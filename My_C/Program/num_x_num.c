//Индуктивные функции
#include <stdio.h>
int main(){
int x;
printf("Enter number: \n");
scanf("%d",&x);
int p=1;
while(x)
	
{

int d=x%10;
p*=d;
x/=10;
	
}
	
printf("%d",p);
	
return 0;
}
