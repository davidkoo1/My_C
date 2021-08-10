#include <stdio.h>
#include <stdlib.h>
void foo (int *p)
{
	printf("Got: *p= %d\n",*p);
	*p+=10;
	printf("Did: *p= %d\n",*p);
}/*
int* bar()
{
int y=648;
	printf("y=%d",y);
return &y;//лучше этого не использовать
}*/
int main(){
	
int x=7;
	printf("x=%d\n",x);
foo(&x);
	printf("x=%d\n",x);
	
}