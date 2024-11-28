#include <stdio.h>

int main() {
    int arr[5] = {15, 22, 7, 30, 19};
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] += 3;
        } else {
            arr[i] += 2;
        }
    }
    printf("Mang moi sau khi thay doi la:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

