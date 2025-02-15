#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cond = 0;

    if (n > 0)
    {
        if (n > 10 && n % 2 == 0)
        {
            cond += 1;
        }
        if (n > 15 && n % 3 == 0)
        {
            cond += 1;
        }
        if (n % 7 == 0)
        {
            cond += 1;
        }
        switch (cond)
        {
        case 0:
            printf("The verdict for the number %d is: NORMAL", n);
            break;
        case 1:
            printf("The verdict for the number %d is: MAGICAL", n);
            break;
        case 2:
            printf("The verdict for the number %d is: MIRACULOUS", n);
            break;
        case 3:
            printf("The verdict for the number %d is: SUPERNATURAL", n);
            break;
        }
    }
    else
    {
        printf("The verdict for the number %d is: INVALID", n);
    }

    return 0;
}
