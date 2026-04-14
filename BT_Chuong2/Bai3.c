#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap so nguyen thu nhat (a): ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai (b): ");
    scanf("%d", &b);

    printf("\n--- Ket qua cac phep tinh ---\n");

    printf("Cong: %d + %d = %d\n", a, b, a + b);

    printf("Tru: %d - %d = %d\n", a, b, a - b);

    printf("Nhan: %d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("Chia: %d / %d = %.2f\n", a, b, (float)a / b);
        printf("Chia lay du: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Loi: Khong the chia cho so 0!\n");
    }

    return 0;
}