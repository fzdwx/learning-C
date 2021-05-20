#include "stdio.h"

int main() {
    for (int i = 0; i < 256; ++i) {
        char c = i;
        if (c == 'A') {
            printf("%d\n", i); // 65
        }
        if (c == 'a') {
            printf("%", i); // 97
        }
    }
}