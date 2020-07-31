#include <stdio.h>
#include <time.h>
int fib(int n)
{
	if(n<=1) return n;
	else 
	return fib(n-1) + fib(n-2);
	}
	
int main()
{
	for(int n=0;n<50;n++)
	{
	clock_t time1=clock();
	int r=fib(n);
	clock_t time2=clock();
	int d=(time1-time2)*1000/CLOCKS_PER_SEC;
printf("fib(%d) = %d, \t time= %d ms\n",n,r,d);	
	}
	
	
	return 0;
	
}
