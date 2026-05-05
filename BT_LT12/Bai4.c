#include <stdio.h>

int timGiaTriNhoNhat(int arr[], int n) {
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    return min;
}

int main() {
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }

    int mang[n];

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("mang[%d] = ", i);
        scanf("%d", &mang[i]);
    }

    int min_value = timGiaTriNhoNhat(mang, n);
    printf("\nKet qua\n");
    printf("Gia tri nho nhat trong mang la: %d\n", min_value);

    return 0;
}