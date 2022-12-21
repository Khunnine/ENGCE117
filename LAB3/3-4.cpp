
#include <stdio.h>
#include <string.h>
struct employee {
    char name[20];
    int age;
    int gender;
    int salary;
};

int main(){
    int n;
    struct employee *e1;
    e1 = new struct employee;
    printf("How many Employee: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++ ){
        printf("Input Employee information\n------------ [%d]: ", i+1);
        scanf("%s %d %c %d", e1[i].name,
                            &e1[i].age,
                            &e1[i].gender,
                            &e1[i].salary);
}
    for (int i = 0; i < n; i++){
        printf("\nEmployee [%d]: \n", i+1);
        printf("Name: %s\n", e1[i].name);
        printf("Age: %d\n", e1[i].age);
        printf("Gender %c\n", e1[i].gender);
        printf("Salary: %d\n", e1[i].salary);
    }
    return 0;
}
