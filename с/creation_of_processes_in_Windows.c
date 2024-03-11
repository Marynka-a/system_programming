//Calculate the sum of positive numbers among those valid numbers entered by the user.

#include <stdio.h>
#include <stdlib.h>

// A function for counting the sum of positive numbers in an array
double calculate_positive_sum(double numbers[], int size) 
{
    double sum = 0;
    for (int i = 0; i < size; i++) 
    {
        if (numbers[i] > 0) 
        {
            sum += numbers[i];
        }
    }
    return sum;
}

int main() 
{
    // Getting real numbers entered by the user
    int n;
    printf("Enter the number of numbers:");
    scanf("%d", &n);

    double *numbers = (double *)malloc(n * sizeof(double));
    if (numbers == NULL) 
    {
        printf("Error: Failed to allocate memory.\n");
        return 1;
    }

    printf("Enter %d real numbers: \n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%lf", &numbers[i]);
    }

    // Calculating the sum of positive numbers
    double positive_sum = calculate_positive_sum(numbers, n);
    printf("Sum of positive numbers: %.2lf\n", positive_sum);

    // Freeing allocated memory
    free(numbers);

    return 0;
}

