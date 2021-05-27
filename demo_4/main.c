#include <stdio.h>
#include "windows.h"

long f(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * f(n - 1);
}

int main() {
    int n = 10;


    printf("%ld", f(n));
}