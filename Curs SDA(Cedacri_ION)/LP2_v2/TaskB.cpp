#include <bits/stdc++.h>

int main()
{
    int v[] = {3, 5, 1, 8, 9, 2, 7, 10, 11, 0, 1};
    int n = sizeof(v) / sizeof(v[0]);
    
    int minOdd[3] = {INT_MAX, INT_MAX, INT_MAX}; 

    for (int i = 0; i < n; i++)
	{
        int currentElement = v[i];
        if (currentElement % 2 != 0)
		{ 
            for (int j = 0; j < 3; j++)
			{
                if (currentElement < minOdd[j])
				{
                    for (int k = 2; k > j; k--)
					{
                        minOdd[k] = minOdd[k - 1];
                    }
                    minOdd[j] = currentElement;
                    break;
                }
            }
        }
    }

    printf("Min1 = %d\nMin2 = %d\nMin3 = %d\n", minOdd[0], minOdd[1], minOdd[2]);

    return 0;
}
