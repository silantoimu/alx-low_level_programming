#include  "main.h"
#include <stddef.h>

char* _strchr(char* s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return (s); /* Return the pointer to the first occurrence of c*/
        }
        s++;
    }

    /*If c is not found, return NULL*/
    return (NULL);
}

