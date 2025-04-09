#include <stdio.h>

int main()
{
    int grades[10];         // Array storing 10 values
    int count = 10;         // Number of values to be read
    long sum = 0;           // Sum of the numbers
    float average = 0.0f;   // Average of the numbers
    

    printf("\nEnter the 10 grandes:\n");

    // Read the ten numbers to be averaged
    int i;
    for(i = 0; i < count ; ++i)
    {
        printf("%2u> ",i + 1);
        scanf("%d", &grades[i]);    // read a grade
        sum += grades[i];           // Add it to sum
    }

    average = (float)sum/count;     // average

    printf("\nAverage of the then grades entered is: %.2f\n", average);

    return 0;
} 