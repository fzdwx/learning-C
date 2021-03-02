/*****************************
 * @Createdby likelove
 * @contact  980650920@qq.com
 * @date 2021/3/2
 * @desc ${desc}
 ******************************/
#include <stdio.h>

int main() {
    int n = 1, m = 2;
    switch (n) {
        case 1:
            m++;
        case 2:
            n++;
        case 3:
            switch (n) {
                case 1:
                    n++;
                case 2:
                    m++;
                    n++;
                    break;
            }
        case 4:
            m++;
            break;
        default:
            break;
    }
    printf("%d", m);
    printf("%d", n);
}