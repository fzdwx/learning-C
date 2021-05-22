/*****************************
 * @Createdby likelove
 * @contact  980650920@qq.com
 * @date 2021/5/22
 * @desc ${desc}
 ******************************/
#include <stdio.h>

int main() {
    int a = 2, b = 4, c = 6, x, y;

    y = ((x = a + b), (b + c));
    printf("y=%d,x%d", y, x);
}