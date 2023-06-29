#include "main.h"
#include <string.h>

char* cap_string(char* str) {
    // Check if the input string is NULL or empty
    if (str == NULL || *str == '\0') {
        return str;
    }

    // Capitalize the first character
    if (islower(*str)) {
        *str = toupper(*str);
    }

    // Iterate over the remaining characters
    for (int i = 1; str[i] != '\0'; i++) {
        // Check if the current character is a separator
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' ||
            str[i] == '}') {
            // Capitalize the next character if it is a lowercase letter
            if (islower(str[i + 1])) {
                str[i + 1] = toupper(str[i + 1]);
            }
        }
    }

    return str;
}

