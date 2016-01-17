#include <stdio.h>
#include <math.h>


double cal_pois(double a, double n);
double fact(double n);


double cal_pois(double a, double n)
{
    return exp(-a) * pow(a, n) / fact(n);
}


double fact(double n)
{
    return (n == 0.0) ? 1 : n * fact(n - 1.0);
}


int main(void)
{
    double pois;
    double n;
    double a = 1.0;

    printf("1分間に平均で1回起きる現象が\n");
    printf("n回\t起きる確率\n\n");

    for (n = 0.0; n <= 10.0; n++) {
        pois = cal_pois(a, n);
        printf("%2.0lf\t%10.8lf\n", n, pois);
    }
}
