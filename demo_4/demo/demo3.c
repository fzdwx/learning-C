#include <stdio.h>


double power(int x, int y);

long jieCheng1(int x);

long jieCheng2(int x);

int main() {
    long i = jieCheng2(10);
    printf("%ld", i);
}

long jieCheng2(int x) {
    if (x <= 1) {
        return 1;
    }
    return x * jieCheng2(x - 1);
}

long jieCheng1(int x) {
    long res = 1;
    for (int i = 1; i <= x; i++) {
        res *= i;
    }
    return res;
}

double power(int x, int y) {
    double res = 1;
    for (int i = 0; i < y; i++) {
        res *= x;
    }
    return res;
}