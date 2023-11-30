#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student
{
	int ID;
	char name[10];
	float grade;
};

int main(int argc, char *argv[]) {
	struct student s1 = {2315391, "SB", 3.8};
	s1.ID = 123456;
	s1.name[0] = 'K';
	s1.grade = 4.3;
	
	printf("<Student s>\n");
	printf("ID: %d\n", s1.ID);
	printf("Name: %s\n", s1.name);
	printf("Grade: %f\n", s1.grade);
	
	strcpy(s1.name, "Sungho");
	printf("Name2: %s\n", s1.name);

	return 0;
}

