/*****************************
 * @Createdby likelove
 * @contact  980650920@qq.com
 * @date 2021/5/22
 * @desc ${desc}
 ******************************/

#include <stdio.h>

int fun(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    return 0;
}

int main() {
    printf("%d\n", fun(2000));
    printf("%d\n", fun(1900));
    printf("%d\n", fun(2012));
    printf("%d\n", fun(2011));
}