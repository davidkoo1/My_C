#include <stdio.h>
/*
n=Высота башни
i=Столб с которого начинать перекладывать
k=На какой столб переложить башню
*/
void h(int n, int i, int k);
int main(){
h(3,2,1);
//n,i,k
	
return 0;
}
void h(int n,int i,int k)
{
	if(n==1)
printf("Move disk 1 from pin %d to %d.\n",i,k);
	else
	{
		int tmp = 6-i-k;
		h(n-1, i, tmp);
printf("Move disk %d from pin %d to %d.\n",n,i,k);
	h(n-1, tmp, k);
}
}