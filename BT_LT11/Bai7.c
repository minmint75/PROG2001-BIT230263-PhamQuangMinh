#include <stdio.h>
#include <string.h>

struct Product {
    char name[50];
    double price;
};

int main() {
    struct Product p1, p2;

    printf("Nhap thong tin San pham 1:\n");
    printf("Ten: ");
    fflush(stdin);
    fgets(p1.name, sizeof(p1.name), stdin);
    p1.name[strcspn(p1.name, "\n")] = 0;
    printf("Gia: ");
    scanf("%lf", &p1.price);

    printf("\nNhap thong tin San pham 2:\n");
    printf("Ten: ");
    getchar();
    fgets(p2.name, sizeof(p2.name), stdin);
    p2.name[strcspn(p2.name, "\n")] = 0;
    printf("Gia: ");
    scanf("%lf", &p2.price);

    printf("\n--- Ket qua so sanh ---\n");

    if (strcmp(p1.name, p2.name) == 0) {
        printf("- Hai san pham co ten giong nhau.\n");
    } else {
        printf("- Hai san pham co ten khac nhau.\n");
    }

    if (p1.price == p2.price) {
        printf("- Hai san pham co gia bang nhau.\n");
    } else if (p1.price > p2.price) {
        printf("- San pham 1 dat hon san pham 2.\n");
    } else {
        printf("- San pham 2 dat hon san pham 1.\n");
    }

    return 0;
}