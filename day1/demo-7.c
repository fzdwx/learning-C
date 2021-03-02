/*****************************
 * @Createdby likelove
 * @contact  980650920@qq.com
 * @date 2021/3/2
 * @desc ${desc}
 ******************************/
#include <stdio.h>


int func1(int i) {
    if (i == 0) {
        return 1;
    }
    return i * func1(i - 1);
}

int func2() {
    int n = 1;
    for (int i = 1; i <= 10; ++i) {
        n *= i;
    }
    return n;
}

int func3(n) {
    int sum = 0;
    int res = 1;
    int i;
    for (i = 1; i <= n; i++) {
        res = i * res;
        sum = sum + res;
    }

    return sum;
}

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        int n = func1(i);
        sum += n;
    }
    printf("%d\n", sum);
}