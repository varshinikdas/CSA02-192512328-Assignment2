#include <stdio.h>

int main(void)
{
    double principal, rate, repayment;
    double balance, interest, payment;
    double total_interest = 0.0;
    int month = 0;
    const int MAX_MONTHS = 360;

    printf("SELF-HELP GROUP LOAN REPAYMENT\n");

    printf("Enter loan amount (Rs.): ");
    scanf("%lf", &principal);

    printf("Enter monthly interest rate (%%): ");
    scanf("%lf", &rate);

    printf("Enter fixed monthly repayment (Rs.): ");
    scanf("%lf", &repayment);

    if (principal <= 0 || rate < 0 || repayment <= 0)
    {
        printf("Invalid input. Enter a positive loan and repayment, and a non-negative interest rate.\n");
        return 1;
    }

    balance = principal;
    rate = rate / 100.0;

    if (rate > 0 && repayment <= principal * rate)
    {
        printf("Loan cannot be fully repaid: repayment must exceed the initial monthly interest.\n");
        return 1;
    }

    printf("\nMonth\tOpening Balance\tInterest\tPayment\t\tClosing Balance\n");

    while (balance > 0.005 && month < MAX_MONTHS)
    {
        double opening_balance = balance;

        month++;
        interest = opening_balance * rate;
        balance = opening_balance + interest;

        payment = repayment;

        if (payment >= balance)
            payment = balance;

        balance = balance - payment;

        if (balance < 0.005)
            balance = 0.0;

        total_interest += interest;

        printf("%d\tRs.%.2f\tRs.%.2f\tRs.%.2f\tRs.%.2f\n",
               month, opening_balance, interest, payment, balance);
    }

    if (balance == 0.0)
    {
        printf("\nLoan fully repaid.\n");
        printf("Number of months = %d\n", month);
        printf("Total interest paid = Rs.%.2f\n", total_interest);
    }
    else
    {
        printf("\nSafety limit reached: loan is not fully repaid.\n");
        printf("Months processed = %d\n", month);
        printf("Remaining balance = Rs.%.2f\n", balance);
        printf("Interest accumulated = Rs.%.2f\n", total_interest);
    }

    return 0;
}
