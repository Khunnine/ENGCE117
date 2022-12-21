#include <stdio.h>
#include <string.h>

struct employee { 
    char name[20];
    int age;
    int code;
    int salary;
};
void display(struct employee e);

int main() {
    struct employee e1;
    strcpy(e1.name, "Khunnine");
    e1.age = 21;
    e1.code = 754;
    e1.salary = 70000;
    display(e1);
    return 0;
}
void display(struct employee e) {
    printf("Name: %s\n", e.name);
    printf("Age: %d\n", e.age);
    printf("Code: %.3d\n", e.code);
    printf("Salary: %d\n", e.salary);
}
