#include <math.h>
#include <stdio.h>

int divizor(int a);
int simp(int i);
int div(int a, int b);

int main() {
    float a;
    a = -1.5;
    scanf("%f", &a);
    if ((int)a == a)
        printf("%d", divizor(a));
    else
        printf("n/a");
}

int div(int a, int b) {
    int temp = a;
    while (temp > 0)
        temp -= b;
    if (temp == 0)
        return 1;
    return 0;
}

int simp(int s) {
    for (int i = 2; i < s; ++i)
        if (div(s, i) == 1)
            return 0;
    return 1;
}

int divizor(int a) {
    if (a < 0)
        a = -a;
    int max = 1;
    for (int i = 1; i <= a; ++i) {
        if (simp(i) == 1)
            if (div(a, i) == 1)
                max = i;
    }
    return max;
}
