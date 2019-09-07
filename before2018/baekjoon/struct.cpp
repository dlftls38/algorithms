#include <stdio.h>

struct student {
	char name[20];
	int age;
	int grade[3];
	
};

int main(){
	
	struct student person = {"morph", 20, {70,80,90}};
	printf("%d",person.age);
}
