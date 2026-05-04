#include <stdio.h>

int main() {
    int n;
    long long tong = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Vui long nhap n >= 1\n");
    } else {
        for (int i = 1; i <= n; i++) {
            tong += (long long)i * i;
        }

        printf("Tong S = 1^2 + 2^2 + ... + %d^2 la: %lld\n", n, tong);
    }

    return 0;
}