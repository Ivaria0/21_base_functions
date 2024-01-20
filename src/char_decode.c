#include <math.h>
#include <stdio.h>

int code();
int decode();

int main(int argc, char *argv[]) {
    if (argv[1][0] == '0')
        return code();
    else
        return decode();
}

int code() {
    char c, p;
    do {
        scanf("%c%c", &c, &p);
        if (p == ' ') {
            printf("%X ", c);
        } else if (p == '\n') {
            printf("%X", c);
        } else {
            printf("n/a");
            return 0;
        }
    } while (p != '\n');
    return 0;
}

int decode() {
    char p;
    int a;
    do {
        scanf("%X%c", &a, &p);
        if (p == ' ') {
            printf("%c ", a);
        } else if (p == '\n') {
            printf("%c", a);
        } else {
            printf("n/a");
            return 0;
        }
    } while (p != '\n');
    return 0;
}
