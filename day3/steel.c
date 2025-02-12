#include <stdio.h>

int main()
{
    int h, t;
    float c;

    scanf("%d %f %d", &h, &c, &t);

    int condition_1 = h > 50;
    int condition_2 = c < 0.7;
    int condition_3 = t > 5600;

    int conditions_met = condition_1 + condition_2 + condition_3;

    int grade;
    const char *message;

    if (conditions_met == 3)
    {
        grade = 10;
        message = "All of the conditions met.";
    }
    else if (condition_1 && condition_2)
    {
        grade = 9;
        message = "Two conditions met.";
    }
    else if (condition_2 && condition_3)
    {
        grade = 8;
        message = "Two conditions met.";
    }
    else if (condition_1 && condition_3)
    {
        grade = 7;
        message = "Two conditions met.";
    }
    else if (conditions_met == 1)
    {
        grade = 6;
        message = "Only one condition met.";
    }
    else
    {
        grade = 5;
        message = "None of the conditions met.";
    }

    printf("The grade of the steel is: %d\n", grade);
    printf("%s\n", message);

    return 0;
}
