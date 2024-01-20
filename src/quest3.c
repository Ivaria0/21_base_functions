#include <math.h>
#include <stdio.h>

int fibo(int n);

int main() {
    float n;
    n = -1.5;
    scanf("%f", &n);
    if (((int)n == n) && (n >= 0))
        printf("%d", fibo(n));
    else
        printf("n/a");
}

int fibo(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
