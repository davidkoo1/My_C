/* Массивы данных */
//Все индексы начинаются с 0, не включая последнее значенияе
#include <stdio.h>
int main() {
int arr[5] ={1,55,24,7,9};
arr[0]=28;
printf("%d %d \n", arr[0],arr[4]);
int array[]={3,65,79,324,567,21,1};
float numbers[3];
	numbers [0] = 0.56f;
	numbers [1] = 15.06f;
	numbers [2] = 643.1f;
char word[] ={'H','E','L','L','O'};
char wordS[]="Hello, World!";
wordS[1]='3';
printf("%s ",wordS);
printf("\n[6]: %c", wordS[7]);

return 0;
} 
