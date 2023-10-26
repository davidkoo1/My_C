#include <stdio.h>

main()
{
	
	int n, m;
	
	printf("Input n, m: ");
	scanf("%d%d", &n, &m);
	printf("N*M\n");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}