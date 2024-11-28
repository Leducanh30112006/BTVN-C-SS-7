#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Cac phan tu la so nguyen to trong mang la:\n");
    for (int i = 0; i < n; i++) {
        int flag = 1;
        if (arr[i] <= 1) {
            flag = 0;
        } else {
            for (int j = 2; j <= arr[i] / 2; j++) {
                if (arr[i] % j == 0) {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

