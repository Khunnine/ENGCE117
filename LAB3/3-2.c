#include <stdio.h> 
#include <string.h>

struct employee{ 
    char name[20];
    int age;
    int code;
    int salary;
};
typedef struct employee epy;

void display(struct employee *ps);

int main() {
    epy n;
    strcpy(n.name, "Natthaporn");
    display(&n);
     printf("Name: %s\nAge: %d\nCode: %.3d\nSalary: %d bath", n.name, n.age, n.code, n.salary); 
     return 0;
}
void display(struct employee *ps) {
    ps->age = 21;
    ps->code = 754;
    ps->salary = 70000;
}
