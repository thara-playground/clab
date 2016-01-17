#include <stdio.h>


int main(void)
{
    char *str = "wasitacatisaw?";
    char *p, *q;

    printf("オリジナル: %s\n", str);

    p = q = str;

    while (*q != '\0')
        q++;

    printf("反転:");
    while (q >= p)
        putchar(*q--);

    printf("\n");
}
