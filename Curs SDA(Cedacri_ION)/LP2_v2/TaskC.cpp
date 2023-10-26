#include <stdio.h>

main()
{
	
	int v[] = {4,2,3,5,1,3,8};
	
	int n = sizeof(v) / sizeof(v[0]);
	
	
	int check = 6;
	
	printf("Input key number >> ");
	scanf("%d", &check);
	
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n - 1; j++)
		{
			if(v[i] + v[j + 1] == check)
			{
				printf("nums(%d, %d) at [%d, %d]\n", v[i], v[j + 1], i + 1, j + 2);
			}
		}
	}
	
	
}