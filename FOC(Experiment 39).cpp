#include <stdio.h>

int main() {
    float loan = 3000;
    float payment = 85;
    float interestRate = 0.01;
    float interest, principal, balance = loan;
    int months = 0;
    float totalInterest = 0;

    while (balance > 0) {
        months++;
        interest = balance * interestRate;
        totalInterest += interest;
        principal = payment - interest;
        balance -= principal;

        printf("Month %d: Payment = $%.2f, Interest = $%.2f, Principal = $%.2f, Balance = $%.2f\n",
               months, payment, interest, principal, balance);
    }

    int years = months / 12;
    int remainingMonths = months % 12;

    printf("\nIt will take %d years and %d months to pay back the loan.\n", years, remainingMonths);
    printf("Total interest paid: $%.2f\n", totalInterest);

    return 0;
}