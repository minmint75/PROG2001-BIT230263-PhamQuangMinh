#include <stdio.h>

int main() {
    int num1, num2;

    printf("Nhập vào hai số nguyên: ");
    scanf("%d %d", &num1, &num2);

    printf("Tổng (Addition): %d\n", num1 + num2);
    printf("Hiệu (Subtraction): %d\n", num1 - num2);
    printf("Tích (Multiplication): %d\n", num1 * num2);
    
    if (num2 != 0) {
        printf("Thương (Division): %d\n", num1 / num2);
        printf("Chia lấy dư (Modulus): %d\n", num1 % num2);
    } else {
        printf("Không thể thực hiện phép chia cho 0!\n");
    }

    return 0;
}