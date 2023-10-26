#include <bits/stdc++.h>
#define		forn(i,d,n)		for(int i = d; i < n; i++)
int main() 
{
	int n;
    scanf("%d", &n);
    int arr[n];
    int counterArr[11] = {0};
    int m = INT_MIN;
    
    for (int i = 0; i < n; i++)
	{
        scanf("%d", &arr[i]);
        counterArr[arr[i]]++;
        m = std::max(counterArr[arr[i]], m);
    }
    /*
    for (int i = 1; i <= 10; i++) {
        printf("%d = %d\n", i, counterArr[i]);
    }
        */
    printf("\n%d\n", m);

    char field[m][11];
    
    for (int i = 0; i < m; i++)
	{
        for (int j = 0; j < 11; j++)
		{
            field[i][j] = '.';
        }
    }
    
    for (int i = 0; i < 11; i++)
	{
        for (int j = 0; j < counterArr[i]; j++)
		{
            field[m - j - 1][i] = '*'; 
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 1; j < 11; j++) {
            printf("%c\t", field[i][j]);
        }
        printf("\n");
    }
	
	for(int i = 1; i <= 10; )
		printf("%d\t", i++);
}

/*


29
6 3 8 6 7 4 8 9 2 10 4 9 5 7 4 8 6 7 2 10 4 1 8 3 6 3 6 9 4


*/