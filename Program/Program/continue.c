#include <stdio.h>
int main(){
for(int i=1;i<20;i++)
{
if(i==13)	continue;//Avoid numbers 13. (i!=13);
if(i%7==0) continue;//Skip multiple of 7.
	printf("Number i=%d\n",i);
if(i%3==0)
	printf("It is a multipte of 3\n",i);
else
	printf("It is not a multipte of 3\n",i);
	

}
	
return 0;	
}
