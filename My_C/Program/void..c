#include <stdio.h>
#include <stdlib.h>
void pii(void *p, int t);
int main()
{
	char c='W';
          int i=450;
          double d=-1.76;
           void *p;
        
         p=&c;
        pii(p,1);
         p=&i;
        pii(p,2);
         p=&d;
        pii(p,3);
	
	return 0;
	
	
}
void pii(void *p, int t)
{
if(t==1)	
	printf("%c\n",*(char*)p);
else if(t==2)
	printf("%d\n",*(int*)p);
else if(t==3)
	printf("%.3lf\n",*(double *)p);
else
	{
		printf("Exiting.");
		exit(1);
	}
	
	
}