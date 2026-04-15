#include <stdio.h>

int main() {
    float a, b, c, max;

    printf("Nhap so thu nhat a: ");
    scanf("%f", &a);
    printf("Nhap so thu hai b: ");
    scanf("%f", &b);
    printf("Nhap so thu ba c: ");
    scanf("%f", &c);

    if (a > max) {
        max = a;
    }

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    printf("\nGia tri lon nhat trong 3 so %.2f, %.2f, %.2f la: %.2f\n", a, b, c, max);

    return 0;
}