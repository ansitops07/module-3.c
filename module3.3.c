include <stdio.h>

int main() {
    int mark1, mark2, mark3, mark4, mark5;
    float total, percentage;

    printf("Enter mark 1: ");
    scanf("%d", &mark1);

    printf("Enter mark 2: ");
    scanf("%d", &mark2);

    printf("Enter mark 3: ");
    scanf("%d", &mark3);

    printf("Enter mark 4: ");
    scanf("%d", &mark4);

    printf("Enter mark 5: ");
    scanf("%d", &mark5);

    total = mark1 + mark2 + mark3 + mark4 + mark5;
    percentage = (total / 500.0) * 100.0;

    printf("Total: %.2f\n", total);
    printf("Percentage: %.2f\n", percentage);

    if (percentage > 75) {
        printf("Distinction\n");
    } else if (percentage > 60 && percentage <= 75) {
        printf("First class\n");
    } else if (percentage > 50 && percentage <= 60) {
        printf("Second class\n");
    } else if (percentage > 35 && percentage <= 50) {
        printf("Pass class\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}







