#include <stdio.h>

int main() {
    int num = 123456789;
    while(num) {
        printf("%d", num % 10);
        num /= 10;
    }
    return 0;
}
