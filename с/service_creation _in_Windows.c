//Count the number of even numbers among those integers entered by the user.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// A function that counts the number of even numbers
int countEvenNumbers(int *numbers, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (numbers[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

// A function that performs calculations and displays the result
void calculateAndPrint(int *numbers, int size) {
    int evenCount = countEvenNumbers(numbers, size);
    printf("Кількість парних чисел: %d\n", evenCount);
}

// Main function
int main() 
{
    SetConsoleOutputCP(CP_UTF8);
    int size;
    printf("Enter the number of integers: ");
    scanf("%d", &size);

    int *numbers = (int *)malloc(size * sizeof(int));
    if (numbers == NULL) 
    {
        printf("Error allocating memory\n");
        return 1;
    }

    printf("Enter integers separated by a space: ");
    for (int i = 0; i < size; ++i) 
    {
        scanf("%d", &numbers[i]);
    }

    calculateAndPrint(numbers, size);

    free(numbers);
    return 0;
}
