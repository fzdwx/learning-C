/*****************************
 * @Createdby likelove
 * @contact  980650920@qq.com
 * @date 2021/5/22
 * @desc ${desc}
 ******************************/

#include <stdio.h>
#include <math.h>

void m1();

int main() {
    double a, b, c, disc, x1, x2, p, q;
    scanf("a=%lf,b=%lf,c=%lf", &a, &b, &c);
    disc = b * b - 4 * a * c;
    p = -b / (2 * a);
    q = sqrt(disc) / (2 * a);
    x1 = p + q;
    x2 = p - q;

    printf("\nx1=%lf\nx2=%lf", x1, x2);
}

void m1() {
    printf("input a,b,c\n");
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
    printf("%d,%d,%d", a, b, c);

    int d = getchar();
}
