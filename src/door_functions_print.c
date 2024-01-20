#include <math.h>
#include <stdio.h>

long double ver(long double x);
long double lem(long double x);
long double gip(long double x);

int main() {
    long double pi = 3.14159265358979323846;
    long double dx = pi * 2. / 41;
    long double x = -pi;
    long double max1 = 0, max2 = 0, max3 = 10;
    for (int i = 0; i < 42; ++i) {
        if (x == 0) {
            if (ver(x) > max1)
                max1 = ver(x);
        } else if (sqrt(1 + 4 * x * x) - x * x - 1 > 0) {
            if (ver(x) > max1)
                max1 = ver(x);
            if (lem(x) > max2)
                max2 = lem(x);
        } else {
            if (ver(x) > max1)
                max1 = ver(x);
        }
        x += dx;
    }
    x = -pi;
    for (int ab = 0; ab < 42; ++ab) {
        for (int ord = 0; ord < 21; ++ord) {
            if (fabs(ver(x) * 21 / max1 - ord) < 0.5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        x += dx;
    }
    printf("\n");
    x = -pi;
    for (int ab = 0; ab < 42; ++ab) {
        if (sqrt(1 + 4 * x * x) - x * x - 1 > 0) {
            for (int ord = 0; ord < 21; ++ord) {
                if (fabs(lem(x) * 21 / max2 - ord) < 0.5)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
        x += dx;
    }
    printf("\n");
    x = -pi;
    max3 = 10;
    for (int ab = 0; ab < 42; ++ab) {
        if (x != 0) {
            for (int ord = 0; ord < 21; ++ord) {
                if (fabs(gip(x) * 21 / max3 - ord) < 0.5)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
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
