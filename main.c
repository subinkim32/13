#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student
{
	int ID;
	char name[10];
	float grade;
};

int main(int argc, char *argv[]) {
	struct student s = {2315391, "SB", 3.8};
	
	printf("<Student s>\n");
	printf("ID: %d\n", s.ID);
	printf("Name: %s\n", s.name);
	printf("Grade: %f\n", s.grade);
		
	return 0;
}
