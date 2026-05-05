#include <stdio.h>

int main() {
    int a, b, n;
    long long tong = 0;

    printf("Nhap a, b, n (a, b < n): ");
    scanf("%d %d %d", &a, &b, &n);

    if (a >= n || b >= n || a <= 0 || b <= 0) {
        printf("Du lieu khong hop le! Vui long nhap a, b < n va la so duong.\n");
        return 1;
    }

    for (int i = 1; i < n; i++) {
        if (i % a == 0 && i % b != 0) {
            tong += i;
        }
    }

    printf("Tong cac so thoa man dieu kien la: %lld\n", tong);

    return 0;
}