#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z, w;

    printf("Введите x, y, z: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    w = cbrt(pow(x, 6) + pow(log(y), 2))
        + (exp(fabs(x - y)) * pow(fabs(x - y), x + y))
        / (atan(x) + atan(z));

    printf("w = %.3f\n", w);

    return 0;
}
