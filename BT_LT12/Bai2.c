#include <stdio.h>

int main() {
    printf("Cac so thoa man dieu kien (tich = 2 * tong) la:\n");

    for (int i = 10; i <= 99; i++) {
        int a = i / 10;
        int b = i % 10;

        int tich = a * b;
        int tong = a + b;

        if (tich == 2 * tong) {
            printf("%d (vi %d * %d = 2 * (%d + %d))\n", i, a, b, a, b);
        }
    }

    return 0;
}