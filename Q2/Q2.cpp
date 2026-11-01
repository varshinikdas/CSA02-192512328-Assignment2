#include <stdio.h>

int calls;

int verifyDisabilityCard(int card)
{
    calls++;
    return card;
}

int main(void)
{
    int i;
    int senior, eligible, card;
    int result;

    int seniorData[5]   = {0, 1, 1, 0, 1};
    int eligibleData[5] = {1, 1, 0, 1, 1};
    int cardData[5]     = {0, 0, 1, 1, 1};

    printf("RAILWAY SENIOR-CITIZEN CONCESSION\n");

    printf("\nExperiment 1: Short-circuit AND (&&)\n");
    calls = 0;
    result = 0 && verifyDisabilityCard(1);
    printf("Result = %d, Function calls = %d\n", result, calls);

    printf("\nExperiment 2: Short-circuit OR (||)\n");
    calls = 0;
    result = 1 || verifyDisabilityCard(1);
    printf("Result = %d, Function calls = %d\n", result, calls);

    printf("\nExperiment 3: Condition order for 1000 passengers\n");

    calls = 0;
    for (i = 0; i < 1000; i++)
    {
        senior = (i % 4 != 0);
        eligible = (i % 3 != 0);
        card = (i % 10 == 0);

        if ((senior && eligible) ||
            verifyDisabilityCard(card))
        {
            /* Concession granted */
        }
    }
    printf("Senior conditions first: %d verification calls\n", calls);

    calls = 0;
    for (i = 0; i < 1000; i++)
    {
        senior = (i % 4 != 0);
        eligible = (i % 3 != 0);
        card = (i % 10 == 0);

        if (verifyDisabilityCard(card) ||
            (senior && eligible))
        {
            /* Concession granted */
        }
    }
    printf("Card verification first: %d verification calls\n", calls);

    printf("\nExperiment 4: Bitwise & versus logical &&\n");

    calls = 0;
    result = 0 && verifyDisabilityCard(1);
    printf("Using &&: result = %d, calls = %d\n", result, calls);

    calls = 0;
    result = 0 & verifyDisabilityCard(1);
    printf("Using &: result = %d, calls = %d\n", result, calls);

    return 0;
}

