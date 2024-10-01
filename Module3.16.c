#include <stdio.h>

int is_palindrome(int num, int reverse) {
    if (num == 0) {
        return reverse;
    }
    int digit = num % 10;
    reverse = reverse * 10 + digit;
    return is_palindrome(num / 10, reverse);
}


void check_palindrome(int num) {
    int reverse = is_palindrome(num, 0);
    printf("The number is: %d\n", num);
    if (num == reverse) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check_palindrome(num);
    return 0;
}
