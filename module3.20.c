#include <stdio.h>
#include <string.h>

void concatenateStrings(char *str1, char *str2, char *result) {

    int len1 = strlen(str1);

     for (int i = 0; i < len1; i++) {
        *(result + i) = *(str1 + i);
    }

        int len2 = strlen(str2);

        for (int i = 0; i < len2; i++) {
        *(result + len1 + i) = *(str2 + i);
    }

      *(result + len1 + len2) = '\0';
}

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char result[20];

    concatenateStrings(str1, str2, result);

    printf("Concatenated string: %s\n", result);

    return 0;
}
