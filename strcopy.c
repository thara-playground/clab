#include <stdio.h>


void str_copy(char *s1, const char *s2)
{
    while ((*s1++ = *s2++) != '\0');
}


int main(void)
{
    char s1[40] = "UPPER CASE";
    char s2[40] = "lower case";

    printf("before: s1 = %s\n", s1);
    printf("before: s2 = %s\n", s2);
    str_copy(s1, s2);
    printf("after: s1 = %s\n\n", s1);
}
