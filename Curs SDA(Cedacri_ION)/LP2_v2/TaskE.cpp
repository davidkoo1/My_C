#include <stdio.h>
#define N 30
#define M 30

main()
{
	
	int m1[N][M] = {
	{1,2,3},
	{4,5,6},
	{7,8,9}};
	
	int n = sizeof(m1[0]) / sizeof(m1[0][0]);
	printf("%d\n", n);
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			if(i < j && m1[i][j] > 0)
			{
				printf("%d ", m1[i][j]);
			}
		}
	}
	
}