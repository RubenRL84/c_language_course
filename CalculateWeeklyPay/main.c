#include <stdio.h>

// basic pay rate = 12/hr
//overtime = * 1.5
// tax rate
// 15% first 300
// 20% next 150
// 25% the rest

int main()
{

    int working_hours;

    float payment, overtime, taxes;
    printf("Enter your working hours:");
    scanf("%i",&working_hours);

    if (working_hours > 40)
    {
        overtime = (working_hours-40) * 1.5;
        payment = (40 * 12) + (overtime * 12);
    }  
    if((working_hours <= 40) )
    {
        payment = (working_hours * 12);
    }
    if (payment <= 300)
    {
        taxes = payment * 0.15;
    }
    if (payment > 300 && payment <= 450)
    {
        taxes = 300 * 0.15;
        taxes += ((payment - 300) * 0.2);
    }
    if (payment > 450)
    {
        taxes = 300 * 0.15;
        taxes += (150 * 0.2);
        taxes += ((payment - 450) * 0.25);
    }    
    printf("Gross Pay %.2f\n", payment);
    printf("Taxes %.2f\n", taxes);
    printf("net_pay %.2f\n", (payment-taxes));

}   