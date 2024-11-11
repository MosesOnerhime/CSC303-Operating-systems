#include <stdio.h>

int main() {

    float accountBalance = 10000;
    float credit = 50000;
    float debit = 20000;

    accountBalance += credit; // shortcut for addition
    accountBalance -= debit; // shortcut for subtraction
    printf("%f\n", accountBalance);

    return 0;
}