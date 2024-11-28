#include <stdio.h>

int main() {
    int arr[5];
    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Cac phan tu trong mang la\n ");
    for (int i = 0; i < 5; i++) {
        printf("num[%d] = %d\n ", i,arr[i]);
    }
    return 0;
}

