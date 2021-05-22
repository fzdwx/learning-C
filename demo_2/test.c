/*****************************
 * @Createdby likelove
 * @contact  980650920@qq.com
 * @date 2021/5/22
 * @desc ${desc}
 ******************************/

#include <stdio.h>

int main() {
    int a = 15;
    float b = 123.12345657;
    double c = 12345678.1234567;
    char d = 'p';
    printf("a=%d,%5d,%o,%x\n", a, a, a, a);
    printf("b=%f,%lf,%.2lf,%e\n", b, b, b, b);
    printf("c=%f,%lf,%.2lf,%e\n", c, c, c, c);
    printf("d=%c,%8c\n", d, d);
}