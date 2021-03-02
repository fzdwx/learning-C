/*****************************
 * @Createdby likelove
 * @contact  980650920@qq.com
 * @date 2021/3/2
 * @desc ${desc}
 ******************************/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    size_t len = sizeof(arr) / sizeof arr[0];
    int find = 1;
//    scanf("%d", &find);

    int l = 0, r = len;
    int mid;
    while (l <= r) {
        mid = (l + r) >> 1;
        if (find > arr[mid]) {
            l = mid + 1;
        } else if (find < arr[mid]) {
            r = mid;
        } else
            break;
    }
    printf("%d", mid);

}