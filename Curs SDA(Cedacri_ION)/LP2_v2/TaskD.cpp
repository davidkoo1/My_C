#include <stdio.h>

main()
{
	int v1[] = {2,3,1,7}, v2[]={3,5,8,2,4,6};
	
	int n1 = sizeof(v1) / sizeof(v1[0]), n2 = sizeof(v2) / sizeof(v2[0]);
	
	int v3[50] = {0}, count = 0;
	int k = 0;
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < n2; j++)
		{
			if(v1[i] == v2[j])
			{
				v3[count] = v1[i];
				count++;
			}
		}
	}
	
	for(int i = 0; i < count; i++)
		printf("%d ", v3[i]);

}