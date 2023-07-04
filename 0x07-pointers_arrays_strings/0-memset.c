#include <stdio.h>

char *_memset(char *s, char b, unsigned int n) {
       unsigned char* p = s;
    unsigned char value = (unsigned char)b;

    while (n > 0) {
        *p = value;
        p++;
        n--;
    }

    return s;
}

