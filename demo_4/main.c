#include <stdio.h>

/*
 * 数组
 *
 * */

int main() {

    int a[10];

    for (int i = 0; i < 10; i++) {
        a[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d", a[i]);
    }
    return 0;
}