#include <stdio.h>

int main() {
    int arr[5] = {1, 7, 3, 13, 5};
    int flag = 0;
    printf("Cac so chan trong mang la: ");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            flag = 1;
        }
    }
    if (!flag) {
        printf("Mang khong chua so chan.");
    }
    printf("\n");

    return 0;
}

