#include <stdio.h>

int main() {
    int no, firstDigit, lastDigit;

    printf("Enter any number: ");
    scanf("%d", &no);

    lastDigit = no % 10;

  
    while (no >= 10) {
        no /= 10;
    }
    firstDigit = no;

    printf("The sum of the first and the last digit: %d\n", firstDigit + lastDigit);

    return 0;
}

