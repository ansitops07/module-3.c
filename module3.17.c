#include <stdio.h>

typedef struct {
    int empno;
    char empname[50];
    char address[100];
    int age;
} Employee;

int main() {
     Employee employees[5];

    employees[0] = (Employee){1, "mahi ghevariya", "12 sanskeuti re", 40};
    employees[1] = (Employee){2, "janvi kalathiya", "6 avkar St", 45};
    employees[2] = (Employee){3, "palak goti", "89 santi nagar re", 30};
    employees[3] = (Employee){4, "archi vekariys", "301 apple hight", 25};
    employees[4] = (Employee){5, "yashvi solanki", "901 mansarovar St", 28};

        for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("  Empno: %d\n", employees[i].empno);
        printf("  Empname: %s\n", employees[i].empname);
        printf("  Address: %s\n", employees[i].address);
        printf("  Age: %d\n\n", employees[i].age);
    }

    return 0;
}
