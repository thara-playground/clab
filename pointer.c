#include <stdio.h>


int main(void)
{
    char str[] = "abcde";
    int i = 0;
    char *s;

    while (str[i] != '\0') {
        putchar(str[i]);
        i++;
    }
    printf("\n");

    s = str;
    while (*s != '\0') {
        putchar(*s);
        s++;
    }
    printf("\n");
}
