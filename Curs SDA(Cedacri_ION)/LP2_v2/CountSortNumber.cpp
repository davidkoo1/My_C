#include <stdio.h>
#include <stdbool.h>

// Структура для хранения элемента и его количества
struct ElementCount {
    int element;
    int count;
    bool printed;
};

int main() {
    // Ваш массив элементов (предполагается, что он уже заполнен)
    int elements[] = {1, 2, 1, 3, 2, 1, 4, 4, 5, 3, 5};
    int numElements = sizeof(elements) / sizeof(elements[0]);

    // Создаем массив структур ElementCount для подсчета
    struct ElementCount counts[numElements];

    // Инициализируем массив структур
    for (int i = 0; i < numElements; i++) {
        counts[i].element = elements[i];
        counts[i].count = 0;
        counts[i].printed = false;
    }

    // Подсчитываем количество каждого элемента
    for (int i = 0; i < numElements; i++) {
        for (int j = 0; j < numElements; j++) {
            if (elements[i] == counts[j].element) {
                counts[j].count++;
            }
        }
    }

    // Выводим результат
    printf("Repeat element:\n");
    for (int i = 0; i < numElements; i++) {
        if (counts[i].count > 0 && !counts[i].printed) {
            printf("Element %d repeat %d \n", counts[i].element, counts[i].count);
            counts[i].printed = true; // Устанавливаем флаг вывода

            // Сбрасываем флаг printed для всех элементов с тем же значением
            for (int j = i + 1; j < numElements; j++) {
                if (counts[j].element == counts[i].element) {
                    counts[j].printed = true;
                }
            }
        }
    }

    return 0;
}
