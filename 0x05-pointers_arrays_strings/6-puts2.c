#include <stdio.h>

void puts2(const char *str) {
    int i;

    for (i = 0; str[i] != '\0'; i += 2) {
        printf("%c", str[i]);
    }

    printf("\n");
}

int main() {
    const char *str = "Hello, World!";
    puts2(str);

    return 0;
}

