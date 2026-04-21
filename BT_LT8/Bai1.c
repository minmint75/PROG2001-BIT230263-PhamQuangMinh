#include <stdio.h>
#include <string.h>

struct Student {
    char mssv[15];
    char ten[50];
};

int main() {
    struct Student sv1;

    strcpy(sv1.mssv, "BIT230263");
    strcpy(sv1.ten, "Pham Quang Minh");

    printf("--- Thong tin sinh vien ---\n");
    printf("MSSV: %s\n", sv1.mssv);
    printf("Ten:  %s\n", sv1.ten);

    return 0;
}