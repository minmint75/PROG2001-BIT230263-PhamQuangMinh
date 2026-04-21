#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Owner;

typedef struct {
    char model[50];
    int year;
    Owner owner;
} Car;

int main() {
    Car myCar;

    strcpy(myCar.model, "VinFast VF8");
    myCar.year = 2024;

    strcpy(myCar.owner.name, "Nguyen Van Hoang");
    myCar.owner.age = 28;

    printf("--- THONG TIN XE ---\n");
    printf("Model: %s\n", myCar.model);
    printf("Nam san xuat: %d\n", myCar.year);
    
    printf("\n--- THONG TIN CHU XE ---\n");
    printf("Ten chu xe: %s\n", myCar.owner.name);
    printf("Tuoi: %d\n", myCar.owner.age);

    return 0;
}