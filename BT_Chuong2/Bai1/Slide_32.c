#include <stdio.h>

int main() {
    int num;

    printf("Nhập vào một số: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 50) {
        printf("Số %d nằm trong khoảng từ 10 đến 50.\n", num);
    } 
    else {
        printf("Số %d nằm ngoài khoảng [10, 50].\n", num);
    }

    return 0;
}