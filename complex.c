#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} complex;


complex add_complex(complex x, complex y)
{
    complex z;

    z.real = x.real + y.real;
    z.imaginary = x.imaginary + y.imaginary;

    return z;
}

complex mul_complex(complex x, complex y)
{
    complex z;

    z.real = x.real * y.real - x.imaginary * y.imaginary;
    z.imaginary = x.real * y.imaginary + y.real * x.imaginary;

    return z;
}

void show_complex(char varname[], complex x)
{
    printf("%s = %3.1lf + %3.1lfi\n", varname, x.real, x.imaginary);
}

int main(void)
{
    complex x, y, z;

    x.real = 1.0;
    x.imaginary = 2.0;

    y.real = 2.0;
    y.imaginary = 1.0;

    show_complex("x", x);
    show_complex("y", y);

    z = add_complex(x, y);
    show_complex("x + y", z);

    z = mul_complex(x, y);
    show_complex("x * y", z);
}
