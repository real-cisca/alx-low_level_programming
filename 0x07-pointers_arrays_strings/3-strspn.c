unsigned int _strspn(char *s, char *accept) {
    unsigned int length = 0;
    int acceptChars[256] = {0}; 

    while (*accept != '\0') {
        acceptChars[(unsigned char)*accept] = 1;
        accept++;
    }

    while (*s != '\0' && acceptChars[(unsigned char)*s]) {
        length++;
        s++;
    }

    return length;
}

