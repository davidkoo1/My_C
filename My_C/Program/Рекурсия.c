#include <stdio.h>
void matreska(int n);
int main(){
	matreska(8);
return 0;
}
void matreska(int n){
	if(n ==1)
	printf(" Last matreska!= %d\n",n);
else{
printf("Top matreska-- %d\n",n);
	matreska(n-1);
printf("Bot matreska++ %d\n",n);	
}	
}
/*
в рекурсии всегда должен быть крайний 
случай
например сказка про репу, там крайний случай это мышка или на примере Матрёшки, самая маленькая и есть крайний случай, т.е 
волшебный:]*/
