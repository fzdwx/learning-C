#include <stdio.h>

int main() {
    int num = 0;
    while (num <= 100) {
        if (num % 2 == 1) {
            printf("%d  ", num);
        }
        num++;
    }
    return 0;
}