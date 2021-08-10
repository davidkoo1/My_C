#include <stdio.h>
/*Факториал числа */
int fact(int n)
{
if(0==n)
	return 1;
//иначе else
          return fact(n-1)*n;
}
/*Алгоритм Евклида
Наибольший общий делитель */
int gcd(int a,int b){
	if(0==b) return a;
	return gcd(b,a%b);
	
	
}
/*Быстрое возведение в степень,
Возведение в степень*/
double fast_pawer(double a, int n)
{
	if(0==n)
	 return 1;
	if(n%2==1)
	return fast_pawer(a, n-1);
	else
	return fast_pawer(a*a, n/2);
}
/*Фибоначчи*/
int fib(int n)
{
if(n<=1) return n;
return fib(n-1)+fib(n-2);
}
int main(){
printf("Enter n,m: ");	
	int n,m;
	scanf("%d%d",&n,&m);

printf("factorial(%d) = %d\n",n,fact(n));
printf("gcd(%d mod %d)= %d\n",n,m,gcd(n,m));
printf("fast_pawer(%d ^%d)= %lf\n",n,m,fast_pawer(n, m));
printf("fib(%d)= %d",n,fib(n));
	return 0;
}
