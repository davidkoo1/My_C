#include <stdio.h>
#include <math.h>

main()
{
	long resSum = 0;
	long resProd = 1; 
	int n = 10;
	
	for (int i = 2; i <= n; i += 2)
	{
		resProd *= i; 
		resSum += i;
	}
	printf("Use Loop For\n");
	printf("Suma: %ld\n", resSum);
	printf("Produs: %ld\n", resProd);


	
	resSum = 0;
	resProd = 1;
	
	int j = 2;
	while(j <= n)
	{
		resSum += j;
		resProd *= j;
		j+=2;
	}
	printf("\nUse Loop While\n");
	printf("Suma: %ld\n", resSum);
	printf("Produs: %ld\n", resProd);
	
	resSum = 0;
	resProd = 1;
	j = 2;
	do
	{
		resSum += j;
		resProd *= j;
		j+=2;
	}while(j <= n);
	
	printf("\nUse Loop do while\n");
	printf("Suma: %ld\n", resSum);
	printf("Produs: %ld\n", resProd);

}
