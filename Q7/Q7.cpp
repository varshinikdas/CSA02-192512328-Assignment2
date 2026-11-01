#include <stdio.h>

unsigned long long originalChecks;
unsigned long long improvedChecks;

/* Original method: checks divisors from 2 to n-1 */
int originalPrime(unsigned long long n)
{
    unsigned long long i;
    originalChecks = 0;

    if (n < 2)
        return 0;

    for (i = 2; i < n; i++)
    {
        originalChecks++;

        if (n % i == 0)
            return 0;
    }

    return 1;
}

/* Redesigned method: checks only up to square root of n
   and skips even divisors */
int improvedPrime(unsigned long long n)
{
    unsigned long long i;
    improvedChecks = 0;

    if (n < 2)
        return 0;

    if (n == 2)
        return 1;

    if (n % 2 == 0)
    {
        improvedChecks++;
        return 0;
    }

    i = 3;

    while (i <= n / i)
    {
        improvedChecks++;

        if (n % i == 0)
            return 0;

        i += 2;
    }

    return 1;
}

int main(void)
{
    unsigned long long numbers[] = {97, 100, 7919, 1000003};
    int i, originalResult, improvedResult;
    int size = 4;

    printf("Q7 - PRIME NUMBER VERIFICATION\n\n");

    printf("Number\tOriginal Result\tOriginal Checks");
    printf("\tRedesigned Result\tRedesigned Checks\n");

    for (i = 0; i < size; i++)
    {
        originalResult = originalPrime(numbers[i]);
        improvedResult = improvedPrime(numbers[i]);

        printf("%llu\t%-15s\t%llu\t\t%-16s\t%llu\n",
               numbers[i],
               originalResult ? "Prime" : "Not Prime",
               originalChecks,
               improvedResult ? "Prime" : "Not Prime",
               improvedChecks);
    }

    return 0;
}
