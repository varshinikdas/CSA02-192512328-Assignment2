#include <stdio.h>

unsigned long checks = 0;

/* Original version: for loop from 2 to n - 1 */
int prime_original(unsigned long n)
{
    unsigned long i;

    checks = 0;

    if (n < 2)
        return 0;

    for (i = 2; i < n; i++)
    {
        checks++;

        if (n % i == 0)
            return 0;
    }

    return 1;
}

/* Improved version: for loop */
int prime_for(unsigned long n)
{
    unsigned long i;

    checks = 0;

    if (n < 2)
        return 0;

    for (i = 2; i <= n / i; i++)
    {
        checks++;

        if (n % i == 0)
            return 0;
    }

    return 1;
}

/* Improved version: while loop */
int prime_while(unsigned long n)
{
    unsigned long i = 2;

    checks = 0;

    if (n < 2)
        return 0;

    while (i <= n / i)
    {
        checks++;

        if (n % i == 0)
            return 0;

        i++;
    }

    return 1;
}

/* Improved version: do-while loop */
int prime_do_while(unsigned long n)
{
    unsigned long i = 2;

    checks = 0;

    if (n < 2)
        return 0;

    if (n < 4)
        return 1;

    do
    {
        checks++;

        if (n % i == 0)
            return 0;

        i++;
    }
    while (i <= n / i);

    return 1;
}

int main(void)
{
    unsigned long tickets[] = {97, 100, 7919, 1000003};
    int k, p;

    printf("LUCKY-DRAW TICKET VERIFICATION\n\n");
    printf("Original for loop (2 to n-1):\n");

    for (k = 0; k < 4; k++)
    {
        p = prime_original(tickets[k]);

        printf("%8lu %-9s divisions = %lu\n",
               tickets[k], p ? "prime" : "not prime", checks);
    }

    printf("\nImproved for loop:\n");

    for (k = 0; k < 4; k++)
    {
        p = prime_for(tickets[k]);

        printf("%8lu %-9s divisions = %lu\n",
               tickets[k], p ? "prime" : "not prime", checks);
    }

    printf("\nImproved while loop:\n");

    for (k = 0; k < 4; k++)
    {
        p = prime_while(tickets[k]);

        printf("%8lu %-9s divisions = %lu\n",
               tickets[k], p ? "prime" : "not prime", checks);
    }

    printf("\nImproved do-while loop:\n");

    for (k = 0; k < 4; k++)
    {
        p = prime_do_while(tickets[k]);

        printf("%8lu %-9s divisions = %lu\n",
               tickets[k], p ? "prime" : "not prime", checks);
    }

    return 0;
}
