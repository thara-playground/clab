#include <stdio.h>


int str_length(const char *s)
{
    int n = 0;

    while (*s++) n++;
    return n;
}



int comp_str_length(const char *s1, const char *s2)
{
    return str_length(s1) - str_length(s2);
}


int main(void)
{
    int n;
    char str1[ ] = "Long long long string.";
    char str2[ ] = "Short string.";

    printf("Str1:%s\n", str1);
    printf("Str2:%s\n", str2);

    if ((n = comp_str_length(str1, str2)) > 0)
        printf("str1の方がstr2 より長い\n");
    else if (n == 0)
        printf("str1とstr2は同じ長さ\n");
    else
        printf("str2の方がstr1より長い\n");
}
