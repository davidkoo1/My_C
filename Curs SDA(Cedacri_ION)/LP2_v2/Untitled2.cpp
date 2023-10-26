#include <stdio.h>

int main() {
    int elements[] = {2, 8, 5, 12, 10, 6, 9, 16, 14, 3};
    int numElements = sizeof(elements) / sizeof(elements[0]);
    int maxEven[3] = {0, 0, 0}; // Инициализируем массив для хранения максимальных четных элементов

    for (int i = 0; i < numElements; i++) {
        int currentElement = elements[i];
        if (currentElement % 2 == 0) { // Проверка на четность
            for (int j = 0; j < 3; j++) {
                if (currentElement > maxEven[j]) {
                    // Если текущий элемент больше, сдвигаем остальные элементы и добавляем текущий
                    for (int k = 2; k > j; k--) {
                        maxEven[k] = maxEven[k - 1];
                    }
                    maxEven[j] = currentElement;
                    break;
                }
            }
        }
    }

    // Выводим три максимальных четных элемента
    printf("Первые три максимальных четных элемента: %d, %d, %d\n", maxEven[0], maxEven[1], maxEven[2]);

    return 0;
}
