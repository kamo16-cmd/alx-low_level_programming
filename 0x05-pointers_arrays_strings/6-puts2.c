#include <stdio.h>

void puts2(char *str) {
    int i = 0;

    while (str[i] != '\0') {
        printf("%c", str[i]);
        i += 2;
    }

    printf("\n");
}

int main() {
    char *str = "Hello, World!";
    puts2(str);

    return 0;
}

