#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            printf("%d is not a Prime number\n", num);
            return 0;
        }
    }
    printf("%d is a Prime number\n", num);
    return 0;
    }
