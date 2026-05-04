#include <stdio.h>

int main() {
    int n;
    long tong = 0;

    printf("Nhap N (so luong so le dau tien): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap N > 0\n");
    } else {
        for (int i = 1; i <= n; i++) {
            tong += (2 * i - 1);
        }
        printf("Tong cua %d so le dau tien la: %ld\n", n, tong);
    }

    return 0;
}