#include <stdio.h>

void fibArray();

void bobSort();

void erwei();

void array2();

void binarySearch();

/*
 * 数组
 *
 * */

int main() {
    binarySearch();

    return 0;
}

void binarySearch() {
    int arr[7] = {12, 8, 1, 3, 6, 5, 9};
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    int search = 6, mid = 0, l = 0, r = 6;
    while (l <= r) {
        mid = (l + r) / 2;

        if (arr[mid] > search) {
            r = mid - 1;
        } else if (arr[mid] < search) {
            l = mid + 1;
        } else break;

    }
    printf("\n  %d", arr[mid]);
}

// 打印一行一列的数据
void array2() {
    int arr[3][3] = {
            1, 2, 3,
            4, 5, 6,
            7, 8, 9
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 || j == 1) {
                printf("%d ", arr[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void erwei() {
    int arr[5][3] = {
            // math C foxpro
            {80, 75, 92},
            {61, 65, 71},
            {59, 63, 70},
            {85, 87, 90},
            {75, 77, 85},
    };
    int avgArr[4];
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += arr[j][i];
        }
        avgArr[i] = sum / 5;
        avgArr[3] += avgArr[i] / 3;
    }
    for (int i = 0; i < 4; i++) {
        printf("%d ", avgArr[i]);
    }
}

void bobSort() {
    int arr[7] = {3, 1, 5, 6, 7, 4, 2};
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void fibArray() {
    int capacity = 50;

    double a[50] = {1, 1};
    for (int i = 2; i < capacity; i++) {
        a[i] = a[i - 2] + a[i - 1];
    }
}
