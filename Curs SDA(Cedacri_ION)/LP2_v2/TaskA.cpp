#include <stdio.h>

main()
{
	int v[] = {5, 2, 7, 6, 5, 3};
	int sum = 0, count = sizeof(v) / sizeof(v[0]);
	
	
	for(int i = 0; i < count; i++)
		sum += v[i];
		
	float avg = (float)sum / (float)count;
	printf("Sum = %d\nAvg = %.2lf", sum, avg);
}