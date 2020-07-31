//Индуктивные функции
//Максимальное значение и минимальное 
#include <stdio.h>
int main(){
int x;
printf("Enrer number(Exit is print 0): ");
scanf("%d",&x);
int m=x;
int g=x;
while(x!=0)
{
	m=x>m?x:m;
	g=x<g?x:g;
	scanf("%d",&x);
	
}
	printf("Maximum= %d\n Minimum= %d\n",m,g);
	return 0;
}
