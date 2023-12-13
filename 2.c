#include <stdio.h>

int main() {
    int no, count = 0;

    printf("Enter any number: ");
    scanf("%d", &no);//15

            
    while (no != 0) {
        no /= 10;
        count++;
    }

    printf("Total number of digits: %d\n", count);

    return 0;
}

