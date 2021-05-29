#include <stdio.h>
#include <math.h>

void m1();

void m2();

void m3();

void m4();

int fib(int n);

void testFib();

void primenumber();

void whileTest() {

    int n = 0;
    while (getchar() != '\n') {
        n++;
    }

    printf("%d", n);
}

void arrSum(int start, int end) {
    printf("%d", (start + end) * (end + 1 - start) >> 1);
}


int main() {


    return 0;
}

void primenumber() {
    int n = 13;
    double k = sqrt(n);
    int i;
    for (i = 2; i <= k; ++i) {
        if (n % i == 0) {
            break;
        }
    }
    if (i > k) {
        printf("%d is a prime number", n);
    } else {
        printf("%d is not a prime number", n);
    }
}

void testFib() {
    int n = 40;
    printf("%d", fib(n));
}

int fib(int n) {
    if (n < 2) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

void m4() {
    double sub = 1;
    double start = 1;
    for (int i = 3, n = 1; i < 1000000000; i += 2) {
        if (n % 2 != 0) {
            start = start - (sub / i);
        } else {
            start = start + (sub / i);
        }
        n++;
    }

    printf("%10.15lf", start * 4);
}

void m3() {
    for (int i = 100; i < 200; ++i) {
        if (i % 3 != 0) {
            printf("%d\n", i);
        }
    }
}

void m2() {
    int i, l, m;
    for (i = 1; i < 5; ++i) {
        for (l = 1; l < 5; ++l) {
            for (m = 1; m < 5; ++m) {
                if (i != m && i != l && l != m) {
                    printf("%d%d%d\n", i, l, m);
                }
            }
        }
    }
}

void m1() {
    char s = '*';
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%c", s);
        }
        printf("\n");
    }
}


