#include <stdio.h>

void hoanDoi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sapXepGiamDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                hoanDoi(&arr[i], &arr[j]);
            }
        }
    }
}

void inMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong khong hop le!\n");
        return 1;
    }

    int mang[n];

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("mang[%d] = ", i);
        scanf("%d", &mang[i]);
    }

    printf("\nMang ban dau: ");
    inMang(mang, n);

    sapXepGiamDan(mang, n);

    printf("Mang sau khi sap xep giam dan: ");
    inMang(mang, n);

    return 0;
}