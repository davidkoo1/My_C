#include <stdio.h>
#include <stdbool.h>
int main(){
int x;

printf("x= ",x);
	scanf("%d",&x);
bool isp=true;
     for(int d=2;d*d<=x;d++)
     if(x%d==0)
     {
isp =false;
     	break;
     	}
	if(isp)
printf("%d is prime",x);//Простое число
	else
printf("%d not prime",x);//Непростое число
}
