#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if (x < 90)
    {
        printf("Acute Angle\n");
    }
    else if (x == 90)
    {
        printf("Right Angle\n");
    }
    else if (x > 90 && x < 180)
    {
        printf("Obtuse Angle\n");
    }
    else if (x == 180)
    {
        printf("Straight Angle\n");
    }
    else if (x > 180 && x < 360)
    {
        printf("Reflex Angle\n");
    }
    else if (x == 360)
    {
        printf("Full Rotation");
    }
    else
    {
        int n = (x / 360);
        x = (x - 360 * n);
        if (x < 90 && x > 0)
        {
            printf("Acute Angle\n");
        }
        else if (x == 90)
        {
            printf("Right Angle\n");
        }
        else if (x > 90 && x < 180)
        {
            printf("Obtuse Angle\n");
        }
        else if (x == 180)
        {
            printf("Straight Angle\n");
        }
        else if (x > 180 && x < 360)
        {
            printf("Reflex Angle\n");
        }
        else if (x == 360 || x == 0)
        {
            printf("Full Rotation");
        }
    }

    return 0;
}