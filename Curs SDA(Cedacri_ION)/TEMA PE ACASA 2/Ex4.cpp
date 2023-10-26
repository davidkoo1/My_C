#include <stdio.h>

main()
{
	
	int n, m;
	
	printf("Input n");
	scanf("%d", &n);

добавить if
	for(int i = 1; i <= n; i*=2)
	{
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
	}
/*
	//try2
	for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = i; j >= 1; j--)
            printf(" *");
        printf("\n");
    }
    
    */
    /* //try1

	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
            printf(" ");
		for(int j = 0; j <= i; j++)
		{
			printf("* ");	
		}
		printf("\n");
	}
	*/
	
}