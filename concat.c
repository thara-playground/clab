#include <stdio.h>


void str_concat(char *s1, const char *s2)
{
    while ((*s1++) != '\0');

    s1--;

    while (((*s1++) = (*s2++)) != '\0');
}


int main(void)
{
    char s1[80] = "We are ";
    char s2[80] = "learning C language.";

    printf("before: s1 = %s\n", s1);
    printf("before: s2 = %s\n\n", s2);

    str_concat(s1, s2);

    printf("after: s1 = %s\n", s1);
}
