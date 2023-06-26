#include "main.h"
/**
*puts_half - puts half of a string
*@str: string
*Return:void
*/
void _putchar(char c);

void puts_half(char *str) {
    int length = 0;
    int i;

    while (str[length] != '\0') {
        length++;
    }

    int start_index;
    if (length % 2 == 0) {
        start_index = length / 2;
    } else {
        start_index = (length - 1) / 2;
    }

    for (i = start_index; i < length; i++) {
        _putchar(str[i]);
    }

    _putchar('\n');
}

