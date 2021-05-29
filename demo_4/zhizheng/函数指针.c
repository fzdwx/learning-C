#include <stdio.h>

int process(int (*f1)(int, int), int a, int b) {
    return (*f1)(a, b);
}

int getMax(int a, int b) {
    return a > b ? a : b;
}

int getMin(int a, int b) {
    return a > b ? b : a;
}

int getSum(int a, int b) {
    return a + b;
}

int main() {
    int x = 3, y = 1;
    int *a = &x;
    int *b = &y;
    int max = process(getMax, *a, *b);
    int min = process(getMin, *a, *b);
    int sum = process(getSum, *a, *b);

    printf("max=%d,min=%d,sum=%d", max, min, sum);
}