#include <math.h>
#include <stdio.h>

long double ver(long double x);
long double lem(long double x);
long double gip(long double x);

int main() {
    long double pi = 3.14159265358979323846;
    long double dx = pi * 2. / 41;
    long double x = -pi;
    for (int i = 0; i < 42; ++i) {
        if (x == 0)
            printf("%.7Lf | %.7Lf | - | -\n", x, ver(x));
        else if (sqrt(1 + 4 * x * x) - x * x - 1 > 0)
            printf("%.7Lf | %.7Lf | %.7Lf | %.7Lf\n", x, ver(x), lem(x), gip(x));
        else
            printf("%.7Lf | %.7Lf | - | %.7Lf\n", x, ver(x), gip(x));
        x += dx;
    }
}

long double ver(long double x) {
    return 1. / (1 + x * x);
}

long double lem(long double x) {
    return sqrt(sqrt(1 + 4 * x * x) - x * x - 1);
}

long double gip(long double x) {
    return 1. / (x * x);
}
