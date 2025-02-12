#include <stdio.h>

int main()
{
    int units;
    float bill = 0.0;

    // Input the number of units

    scanf("%d", &units);

    // Check if the input is invalid
    if (units < 0 || units > 1000000)
    {
        printf("Invalid Input!\n");
    }
    else
    {
        // Calculate the bill based on the number of units
        if (units <= 100)
        {
            bill = units * 5;
        }
        else if (units <= 300)
        {
            bill = 100 * 5 + (units - 100) * 7;
        }
        else
        {
            bill = 100 * 5 + 200 * 7 + (units - 300) * 10;
        }

        // Apply 10 percent discount if the bill is 1200 or less
        if (bill <= 1200)
        {
            bill = bill * 0.9;
        }

        // Print the final bill amount rounded to two decimal places
        printf("The electricity bill is: %.2f.\n", bill);
    }

    return 0;
}
