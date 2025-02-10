#include <stdio.h>

int main()
{
    // Declare variables to store the input numbers
    int a, b, temp;

    // Read input numbers
    scanf("%d %d", &a, &b);

    // Check constraints
    if (a < -1000000 || a > 1000000 || b < -1000000 || b > 1000000)
    {
        return 1; // Exit if numbers are out of constraints
    }

    // Swap the numbers using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Print the swapped values in required format
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
