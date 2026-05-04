#include <stdio.h>

long long tinhTongBinhPhuong(int n) {
    if (n == 1) {
        return 1;
    }
    return (long long)n * n + tinhTongBinhPhuong(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Vui long nhap so nguyen duong!\n");
        return 1;
    }

    long long ket_qua = tinhTongBinhPhuong(n);
    printf("Tong S = 1^2 + 2^2 + ... + %d^2 la: %lld\n", n, ket_qua);

    return 0;
}