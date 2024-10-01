#include <stdio.h>

int main() {
    int choice;
    float base, height, length, width, radius, area;

    printf("Geometry Calculator\n");
    printf("1. Calculate Area of Triangle\n");
    printf("2. Calculate Area of Rectangle\n");
    printf("3. Calculate Area of Circle\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of the triangle: %.2f\n", area);
            break;

        case 2:
            printf("Enter length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of the rectangle: %.2f\n", area);
            break;

        case 3:
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of the circle: %.2f\n", area);
            break;

        default:
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}
