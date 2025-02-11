#include <stdio.h>

int main()
{
    float income, tax = 0.0;

    scanf("%f", &income);

    // Check if the income is invalid
    if (income < 0 || income > 10000000)
    {
        printf("INVALID\n");
    }
    else
    {
        // Calculate the tax based on income slabs using if-else
        if (income <= 250000)
        {
            tax = 0.0;
        }
        else if (income <= 500000)
        {
            tax = (income - 250000) * 0.05;
        }
        else if (income <= 1000000)
        {
            tax = (250000 * 0.05) + ((income - 500000) * 0.2);
        }
        else
        {
            tax = (250000 * 0.05) + (500000 * 0.2) + ((income - 1000000) * 0.3);
        }

        // Print the total tax payable rounded to two decimal places
        printf("%.2f\n", tax);
    }

    return 0;
}
