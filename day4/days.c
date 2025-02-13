#include <stdio.h>

int main()
{
    int month, year;

    scanf("%d %d", &month, &year);

    if (year < 1 && (month < 1 || month > 12))
    {
        printf("Invalid Month\nInvalid Year\n");
    }
    else if (year < 1)
    {
        printf("Invalid Year\n");
    }
    else if (month < 1 || month > 12)
    {
        printf("Invalid Month\n");
    }
    else
    {
        int days;
        if (month == 2)
        {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                days = 29;
            }
            else
            {
                days = 28;
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            days = 30;
        }
        else
        {
            days = 31;
        }
        printf("%d\n", days);
    }

    return 0;
}
