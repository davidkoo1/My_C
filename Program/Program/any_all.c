//Индуктивные функции
#include <stdio.h>
#include <stdbool.h>
#include <iso646.h>
//Библиотека для значений or/and..
int main(){
	int x;
	scanf("%d",&x );
bool any =false;
bool all =true;
while(x)
{
int d=x%10;
any = any or (d<5);
all = all and (d<5);
x/=10;
}
printf("any= %d\n"
	"all= %d\n", any,all);
	
	return 0;
}
