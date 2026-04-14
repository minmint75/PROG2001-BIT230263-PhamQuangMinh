#include <stdio.h>

int main() {
    int a, b;
    int ket_qua_trai, ket_qua_phai;

    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so lan dich b: ");
    scanf("%d", &b);

    ket_qua_trai = a << b;

    ket_qua_phai = a >> b;

    // In ket qua
    printf("\n--- Ket qua dich bit ---\n");
    printf("%d dich trai %d lan = %d\n", a, b, ket_qua_trai);
    printf("%d dich phai %d lan = %d\n", a, b, ket_qua_phai);

    return 0;
}