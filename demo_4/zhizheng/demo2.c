#include <stdio.h>


int main() {
    int arr[3][3] = {2, 1, 3, 5, 4, 6, 8, 7, 1};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int size = sizeof(arr) / sizeof(int);
    printf("\nsize : %d\n", size);
    printf("arr: %p\n", arr);
    printf("arr + 1: %p\n", arr + 1);
    printf("*arr: %p\n", *arr);

    printf("**arr: %d\n", **arr);
    printf("*((*arr+0)+0): %d\n", *((*arr+0)+0));
    printf("arr[0][0]: %d\n", arr[0][0]);
    printf("&arr: %p\n", &arr);
    printf("*&arr: %p\n", *&arr);
    printf("**&arr: %p\n", **&arr);

    printf("%d", *(*(arr + 1) + 1));


}