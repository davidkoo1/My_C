
/*Динамическое программирование*/
#include <stdio.h>
 int namber(int n){
 	int k[n+1];
 	k[0]=0;
 	k[1]=1;
 	for(int i=2;i<=n;i++)
 	k[i] = k[i-1] + k[i-2];
 return k[n];
 }
int main(){
	int finish;
	scanf("%d",&finish);
	printf("%d Траекторий из 1 в - %d", namber(finish), finish);
	
return 0;
	}
