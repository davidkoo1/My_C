#include <stdio.h>
int main(){
	int start,stop,step;
	printf("Enter start,stop,step: ");
	scanf("%d%d%d", &start,&stop,&step);
	//1 10 2
	//10 1 -1
	int s =(step>0)? +1:-1;
	int i=start;
	while(s*i<s*stop)
	{
	printf("i= %d\n",i);
		i+=step;
	}
	
printf("After i= %d",i);
	
	
	
}
