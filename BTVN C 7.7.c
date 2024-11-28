#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang (tat ca phai la so le):\n");
    for (int i = 0; i < n; i++) {
        while (1) {
            printf("arr[%d] = ", i);
            scanf("%d", &arr[i]);
            if (arr[i] % 2 != 0) {
                break;
            } else {
                printf("Vui long nhap so le.\n ");
            }
        }
    }
    printf("Cac phan tu da nhap trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

