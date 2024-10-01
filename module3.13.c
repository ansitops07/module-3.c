
#include <stdio.h>
#include <string.h>

void copy_string(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char src[100];
    char dest[100];

    printf("Enter a string: ");
    fgets(src, sizeof(src), stdin);
    src[strcspn(src, "\n")] = 0;

    copy_string(dest, src);

    printf("Copied string: %s\n", dest);

    return 0;
}
