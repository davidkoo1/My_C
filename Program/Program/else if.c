/*
		  
		  |
		  |
              II      |     	I
      		  |
 	------------------------->
                      |
	   III	  |	IV
		  |
		  |
Программа показывает в какой четверти 
находятся точки х,у*/
#include <stdio.h>
#include <iso646.h>
int main(int argc, char* argv[]){
	
	float x,y;
printf("Введите х,у:\n");
scanf("%d%d",&x,&y);
	

if(y>0 and x>0)
		printf("В первой части.\n");
else if(y>0 and x<0)
	         printf("Во второй части.\n");
else if(y<0 and x<0)
		printf("В третий части.\n");
else if(y<0 and x>0)
                 printf("В четвертой части.\n");
else
	      printf("Точки на одной оси.\n");
	
	
	}
