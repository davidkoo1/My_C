#include <stdio.h>
int main(){
	int x=1;
printf("Число четное или нечётное:\n"
"Число 0, означает выйти из цикла.\n");
	scanf("%d",&x);
	while(x!=0)
	{
	if(x%2==0)
		printf("Число %d четное\n",x);
		
		
	else
	printf("Число %d нечётное\n",x);
		scanf("%d",&x);
	}
	
	
return 0;	
	}
