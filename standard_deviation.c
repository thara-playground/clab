#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#define NUM 5


int main(void)
{
    char buff[256];
    double val[NUM];
    double sum = 0.0;
    double sumsq = 0.0;
    double mean;

    for (int i = 0; i < NUM; i++) {
        printf("(%d) 浮動小数点を入力してください\t", i + 1);
        fgets(buff, sizeof(buff), stdin);

        if (!sscanf(buff, "%lf", &val[i])) {
            fprintf(stderr, "不正な入力!");
            exit(2);
        }

        sum = sum + val[i];
        sumsq = sumsq + val[i] * val[i];
    }

    printf("平均 %lf\n", mean = sum / NUM);
    printf("標準偏差 %lf\n", sqrt(fabs(sumsq / NUM - mean * mean)));
}
