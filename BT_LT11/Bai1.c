#include <stdio.h>

int main() {
    float diem;

    printf("Nhap diem cua hoc sinh (0 - 10): ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le! Vui long nhap trong khoang [0, 10].\n");
    } 
    else {
        printf("Xep loai: ");
        if (diem >= 9.0) {
            printf("Xuat sac\n");
        } 
        else if (diem >= 8.0) {
            printf("Gioi\n");
        } 
        else if (diem >= 6.5) {
            printf("Kha\n");
        } 
        else if (diem >= 5.0) {
            printf("Trung binh\n");
        } 
        else {
            printf("Yeu\n");
        }
    }

    return 0;
}