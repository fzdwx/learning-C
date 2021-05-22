#include <stdio.h>

void swap(int *a, int *b);

/*****************************
 * @Createdby likelove
 * @contact  980650920@qq.com
 * @date 2021/5/22
 * @desc ${desc}
 ******************************/

int main() {
    printf("输入三个数 a b c\n");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {
        swap(&a, &b);
    }
    if (a > c) {
        swap(&a, &c);
    }
    if (b > c) {
        swap(&b, &c);
    }
    printf("a=%d,b=%d,c=%d", a, b, c);
}

void swap(int *a, int *b) {
    int temp = *a;
    (*a) = (*b);
    (*b) = temp;
}
