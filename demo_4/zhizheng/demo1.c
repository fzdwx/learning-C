#include <stdio.h>

/* 交换 a和b */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * 第一个和最后一个对换，第二个和倒数第二个对换
 * @param arr 数组
 * @param size 数组的长度
 * */
void reverse(int arr[], int size) {

    int n = (size - 1) / 2;
    for (int i = 0; i < n; i++) {
        swap(&arr[i], &arr[size - 1 - i]);
    }
}

void reverse2(int *arr, int size) {
    int n = (size - 1) / 2;
    int x = 1;
    for (int i = 0; i < n; i++) {
        swap(arr, arr + size - i - x);
        arr++;
        x++;
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //         5  4  3  2  1
    int size = 10;
    printf("%llu", sizeof a);
    printf("%llu\n", sizeof(a) / sizeof(int));
    reverse(a, size);
    int *x = a;
    for (int j = 0; j < size; j++) {
        printf("%d ", *x);
        x++;
    }
}
