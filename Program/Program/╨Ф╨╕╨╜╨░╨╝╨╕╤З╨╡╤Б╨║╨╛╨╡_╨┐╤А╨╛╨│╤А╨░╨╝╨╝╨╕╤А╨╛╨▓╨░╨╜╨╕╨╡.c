#include <stdio.h>
#include <time.h>
static  int c[100]={0};
int fib(int n)
{/*Динамическое программирование сверху*/
	if(n<=1) return n;
 if(c[n]==0) 	
	c[n]= fib(n-1) + fib(n-2);
	return c[n];
	}
int fib_d(int n)
{
/*Динамическое программирование снизу*/	
int Fib[n+1];	
Fib[0]=1;
Fib[1]=1;
for(int i=0;i<=n;i++)	
Fib[i]=Fib[i-1]+Fib[i+2];
return Fib[n];
	
	
}
int main()
{
	for(int n=0;n<50;n++)
	{
	clock_t time1=clock();
	int r=fib/*fib_d*/(n);
	clock_t time2=clock();
	int d=(time1-time2)*1000/CLOCKS_PER_SEC;
printf("fib(%d) = %d, \t time= %d ms\n",n,r,d);	
	}
	
	
	return 0;
	
}