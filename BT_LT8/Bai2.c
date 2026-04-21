#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
    int n;

    printf("Nhap so luong nhan vien: ");
    scanf("%d", &n);
    getchar();
    Employee ds_nv[n];

    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin nhan vien thu %d:\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &ds_nv[i].id);
        getchar();

        printf("Ten: ");
        fgets(ds_nv[i].name, sizeof(ds_nv[i].name), stdin);
        ds_nv[i].name[strcspn(ds_nv[i].name, "\n")] = '\0';

        printf("Luong: ");
        scanf("%f", &ds_nv[i].salary);
        getchar();
    }

    printf("\n%-10s %-25s %-15s\n", "ID", "Ho va Ten", "Luong");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-25s %-15.2f\n", ds_nv[i].id, ds_nv[i].name, ds_nv[i].salary);
    }

    return 0;
}