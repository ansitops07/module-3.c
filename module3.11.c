#include <stdio.h>

int main() {
    int arr[100];
    int i, n, pos;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to find (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos > n) {
        printf("Position should be between 1 and %d.\n", n);
    } else {
        printf("Element at position %d is %d.\n", pos, arr[pos - 1]);
    }

    return 0;
}
