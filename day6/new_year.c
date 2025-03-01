#include <stdio.h>

int main()
{
    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses;

    scanf("%d %d %d %d %d %d", &budget, &numGuests, &foodCostPerGuest, &decorationCost, &musicCost, &extraExpenses);

    int foodCost = numGuests * foodCostPerGuest;

    int totalCost = foodCost + decorationCost + musicCost + extraExpenses;

    if (totalCost <= budget && numGuests > 5 && numGuests <= 50)
    {
        if ((decorationCost < 0.30 * budget || foodCost < 0.50 * budget) && (numGuests <= 25 || musicCost > 0))
        {
            printf("Celebration Approved\n");
        }
        else
        {
            printf("Celebration Denied\n");
        }
    }
    else
    {
        printf("Celebration Denied\n");
    }

    return 0;
}
