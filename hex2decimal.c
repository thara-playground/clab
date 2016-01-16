#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

unsigned long to_dec(const char str[])
{
    short i = 0;
    short n;
    unsigned long x = 0;
    char c;

    while (str[i] != '\0') {
        if ('0' <= str[i] && str[i] < '9')
            n = str[i] - '0';
        else if ('a' <= (c = tolower(str[i])) && c <= 'f')
            n = c - 'a' + 10;
        else {
            printf("無効な文字です。\n");
            exit(0);
        }
        i++;

        x = x * 16 + n;
    }
    return x;
}


int main(void)
{
    char str[4][9] = {"BED", "CAFE", "BADFACE","DEADBEE"};

    for (int i = 0; i < 4; i++)
        printf("0x%s = %lu\n", str[i], to_dec(str[i]));
}
