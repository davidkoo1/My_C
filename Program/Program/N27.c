﻿/*
Краткое условие:
Определите количество пар, для которых
произведение  элементов делиться на 26.
Числa в диапазоне от 1 до 10000 включительно.
Чисел всего не больше 1000 штук.
*/
#include <stdio.h>
int main(){
	/*
int N;


//4   входные
//2 6 13 39
//4 выходные


scanf("%d", &N);
int A[N];
for(int i=0;i<N;i++)
	scanf("%d",&A[i]);
int m=0;
for(int i=0;i<N;i++)
	for(int k=i+1;k<N;k++)
if(A[i]*A[k]%26==0)
	m++;
printf("%d",m);
//Программа рабочая, но по времени и памяти
//не лучшая
*/
int N,k26=0,k13=0,k2=0,k1=0;
scanf("%d",&N);
for(int i=0;i<N;i++){
	
	int x;
 	scanf("%d",&x);
	if(x%26==0)
		k26++;
	else if(x%13==0)
		k13++;
	else if(x%2==0)
		k2++;
	else
		k1++;
}

int m=k26*(k26-1)/2 + k26*(k1+k2+k13) + k2*k13;

printf("%d\n",m);
/*Всё работаеи!!!
главное вставить (не писать)(Cntr+V) значения
*/

return 0;
}