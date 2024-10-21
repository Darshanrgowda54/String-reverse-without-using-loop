#include <stdio.h>

int main() {
    char str[] = "Hello World";

    printf("%c%c%c%c%c%c%c%c%c%c%c\n",
           str[10], str[9], str[8], str[7], str[6],
           str[5], str[4], str[3], str[2], str[1], str[0]);
    return 0;
}
