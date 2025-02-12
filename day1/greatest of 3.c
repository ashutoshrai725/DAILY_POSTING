#include <stdio.h>

int main()
{
    // Variable declaration
    int a, b, c, largest;

    // Read the three integers
    scanf("%d %d %d", &a, &b, &c);

    // Check constraints
    if (a < -1000 || a > 1000 || b < -1000 || b > 1000 || c < -1000 || c > 1000)
    {
        printf("Numbers should be between -1000 and 1000\n");
        return 1;
    }

    // Find the largest using if-else
    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    // Print result in required format
    printf("The largest number is : %d\n", largest);

    return 0;
}