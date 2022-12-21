#include <stdio.h>
#include <string.h>

struct employee{ 
	char name[20]; 
	int age;
	char gender;
	int salary;
};
typedef struct employee epy;

int main() {
	epy n, a, g, s;
	strcpy(n.name, "Natthaporn");
	a.age = 21;
	g.gender = 'G';
	s.salary = 70000 ;
	printf("Name: %s \nAge: %d \nGender:  %c\nSalary: %d bath", n.name, a.age, g.gender, s.salary);
	return 0;
}