/*Техника безопасности при работе с памятью в Си,также файл memory.c*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
void foo(int *point)
{
	assert(point);
	*point=0;
}
int main()
{
	int *p=NULL;
	//*p=10;
//Segmentation fol 
	foo(p);
int x;
	scanf("%d",x);
	}