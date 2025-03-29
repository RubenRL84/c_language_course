#include <stdio.h>

int main()
{
    int score = 95;
    int big = 90;

    //simple statment if, no brackets
    if (score > big)
        printf("Jackpot!\n");

    // compound statement if, brackets
    if (score > big)
    {
        score++;
        printf("You win!\n");
    }
}