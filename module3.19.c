#include <stdio.h>

int main() {
    int x, y, sum;
    int p, q;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    p = x;
    q = y;

    sum = p + q;

    printf("Sum of entered numbers is: %d\n", sum);

    return 0;
}
