#include <stdio.h>

int main() {
    int num = 10;

    printf("Giá trị ban đầu: %d\n", num);

    num += 5;
    printf("Sau khi += 5: %d\n", num);

    num -= 3;
    printf("Sau khi -= 3: %d\n", num);

    num *= 2;
    printf("Sau khi *= 2: %d\n", num);

    num /= 4;
    printf("Sau khi /= 4: %d\n", num);

    return 0;
}