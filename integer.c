#include <stdio.h>
#include <math.h>

#define NUM_MAX 20.0


int main(void)
{
    double x,y,z;

    for (x = 1.0; x < NUM_MAX; x++) {
        for (y = 1.0; y < NUM_MAX; y++) {
            if (x == y)
                continue;

            z = sqrt(x * x + y * y);
            if (z == ceil(z))
                printf("X = %2.0lf, Y = %2.0lf, Z = %2.0lf\n", x, y, z);
        }
    }
}
