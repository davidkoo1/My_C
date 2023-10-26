#include <bits/stdc++.h>

int fuc(int n)
{
	if(n == 1)
		return 1;
	return n * fuc(n - 1);	
}


float areaTreung(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

main()
{
	/*
	//E1.1
	for(int i = 2; i <= 100; i+=2)
		printf("%d ", i);
	
	printf("\n");
	
	//E1.2
	int i = 100;
	while(i-=2)
	{
		printf("%d ", i);
		
	}
	
	
	printf("\n");
	
	//E2.1
	printf("Input number for find factorial >> ");
	int n;
	scanf("%d", &n);
	
	printf("%d! = %d\n", n, fuc(n));
	
	//E2.2
	printf("Input 3 number for find area treung >> ");
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	
	printf("Area = %.2f\n", areaTreung(a, b, c));
	
	
	//E3
	int arr[] = {10 , 12, 3, 7 , 9, -7, 12, 7 , 6};
	
	int max = INT_MIN;
	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
		if(arr[i] > max)
		max = arr[i];
	
	
	printf("Max = %d\nPositiile: ", max);
	
	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
		if(arr[i] == max)
		printf("%d ", i+1);
		
		
	//E4	
	char alphabet[] = "AEIOUYaeiouy";
	char str[50];
	scanf("%s", str);
	//printf("\n%d", (int)'a' - (int)'A');
	int count = 0;
	for(int i = 0; i < strlen(str); i++)
	{	
		for(int j = 0; j < strlen(alphabet); j++)
		{
			if(str[i] == alphabet[j])
				count++;	
		}
		//printf("%c", str[i]);	
	}
		//test
		//AEIOUY
	printf("%d\n", count);
	
	
	//A5
	int arr[] = {10 , 12, 3, 7 , 9, -7, 12, 7 , 6};
	
	int pos = 0;
	
	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		int m = INT_MAX;
		pos = i;
		for(int j = i; j < sizeof(arr)/sizeof(arr[0]); j++)
		{
			if(arr[j] < m)
			{
				m = arr[j];
				pos = j;
			}
		}
		
		int tmp = arr[i];
		arr[i] = arr[pos];
		arr[pos] = tmp;
		
	}
	
	
		for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
		printf("%d ", arr[i]);
		
	//1000	
	//10 8 1 -9 5 4
	// //1000
	//
	


	//A6

	char str[50];
	scanf("%s", str);
//	printf("\n%c", str[strlen(str) / 2];
	
	for(int i = 0, j = strlen(str) - 1; i < strlen(str) / 2; i++, j--)
	{	
	
		char tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		
		//printf("i = %c\n", str[i]);
		//printf("j = %c\n", str[j]);	
	}
		//tests
		//stset
	printf("%s", str);	
	
	*/
	
	
	//A7
	int n;
	printf("Input size >>");
	scanf("%d", &n);
	
	
	int arr[n] = {0};
	printf("Input elemente: \n");
	int i = 0, j = 0, k = 0;
	bool flag = true;
	while(k < n)
	{
		if(flag)
		{
			scanf("%d", &arr[n - j - 1]);
			j++;
		}
		else
		{
			scanf("%d", &arr[i]);
			i++;
		}
		flag = !flag;
		k++;
	}
	
	
	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	
	
}