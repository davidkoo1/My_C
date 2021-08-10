#include <stdio.h>
#include <stdint.h>

#define SIZE 5


void bubble_sort(uint8_t * array, size_t size){ 
	uint8_t temp;
	for (size_t i = 0; i < size; ++i){
		for (size_t j = 0; j < size - i -1; ++j) {
			if (array[j] > array[j+1]) {
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	}
}

void print_bytes(uint8_t * array, size_t size){
	printf("[ ");
	for (size_t i = 0; i < size; ++i ) {
		printf("%d ",array[i]);
	}
	printf("]\n");
}

int main (void){
		uint8_t array[SIZE] = { 5, 4, 3, 2, 1 };
		bubble_sort(array, SIZE);
		print_bytes(array, SIZE);
		return 0;
}

