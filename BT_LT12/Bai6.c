#include <stdio.h>

int main() {
    double km;
    double tong_tien = 0;

    printf("Nhap so km da di: ");
    if (scanf("%lf", &km) != 1 || km < 0) {
        printf("So km khong hop le!\n");
        return 1;
    }

    if (km <= 1) {
        tong_tien = km * 15000;
    }
    else if (km <= 5) {
        tong_tien = 1 * 15000 + (km - 1) * 13000;
    }
    else {
        tong_tien = 1 * 15000 + 4 * 13000 + (km - 5) * 11000;
    }

    if (km > 120) {
        tong_tien = tong_tien * 0.9;
    }

    printf("Tong tien cuoc taxi la: %.0f VND\n", tong_tien);

    return 0;
}