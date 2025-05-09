// Write a program to take input of student as roll number, name, age and gender
#include <stdio.h>
int main () {
	int roll, age;
	char name[20], gender[6];
	
	printf("Enter Roll Number : ");
	scanf("%d", &roll);
	printf("\n Age :  : ");
	scanf("%d", &age);
	printf("\n Enter Name : ");
	scanf("%s", &name);
	printf("\n Gender : ");
	scanf("%s", &gender);
	
	printf("\n Name : %s \n Gender : %s ", name, gender);
	printf("\n Age :  %d \n Roll No : %d", age, roll);
	
	return 0;
}
