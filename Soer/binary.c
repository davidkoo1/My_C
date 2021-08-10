#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c = 10;
	if(c == rand())
	{
		printf("Success!\n");	//Не получим это сообщение без изменений в файле patch
	}
	return 0;
}

//gcc -o binary binary.c
//./binary
