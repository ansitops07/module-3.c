#include <stdio.h>

int main() {
    int n, a = 0, b = 1, other = 0;

    printf("Enter a positive num: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d is: ", n);

    while (other <= n) {
        printf("%d, ", other);

        a = b;
        b = other;
        other = a + b;
    }

    printf("\n");

    return 0;
}
