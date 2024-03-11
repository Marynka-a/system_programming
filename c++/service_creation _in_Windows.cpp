//Count the number of even numbers among those integers entered by the user.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Функція, яка підраховує кількість парних чисел
int countEvenNumbers(int *numbers, int size) 
{
    int count = 0;
    for (int i = 0; i < size; ++i) 
    {
        if (numbers[i] % 2 == 0) 
        {
            count++;
        }
    }
    return count;
}

// Функція, яка виконує обчислення та вивід результату
void calculateAndPrint(int *numbers, int size) 
{
    int evenCount = countEvenNumbers(numbers, size);
    printf("Кількість парних чисел: %d\n", evenCount);
}

// Основна функція
int main() 
{
    SetConsoleOutputCP(CP_UTF8);
    int size;
    printf("Введіть кількість цілих чисел: ");
    scanf("%d", &size);

    int *numbers = (int *)malloc(size * sizeof(int));
    if (numbers == NULL) 
    {
        printf("Помилка виділення пам'яті\n");
        return 1;
    }

    printf("Введіть цілі числа через пробіл: ");
    for (int i = 0; i < size; ++i) 
    {
        scanf("%d", &numbers[i]);
    }

    calculateAndPrint(numbers, size);

    free(numbers);
    return 0;
}
