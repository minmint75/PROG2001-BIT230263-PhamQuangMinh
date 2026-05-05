#include<stdio.h>
#include<string.h>

struct Owner{
    char name[50];
    int age;
};

struct Car{
    char model[50];
    int year;
    struct Owner owner;
  };

int main(){
  struct Car car1 = {"Vinfast", 2024, {"Pham Quang Minh", 21}};
    printf("Ten: %s\n", car1.owner.name);
    printf("Tuoi: %d\n", car1.owner.age);
    printf("Model: %s\n", car1.model);
    printf("Nam: %d", car1.year);

    return 0;
}