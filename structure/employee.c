//WAP to tak input of 10 employees as id, name, address, salary
// display only the information of employees whose salary is greater than 
// 10,000 using structure

#include <stdio.h>

int main() {
	struct employee {
		int id[10], salary[10];
		char name[10][20], address[10][20];	
	};
	
	int i;
	
	struct employee data;
	
	for(i=0; i<=9; i++) {
		printf("\nEnter id of %d employee : ", i+1);
		scanf("%d", &data.id[i]);
		printf("\nEnter employee name : ");
		scanf(" %s", data.name[i]);
		printf("\nEnter salary of the employee ; ");
		scanf("%d", &data.salary[i]);
		printf("\nEnter address of the employee : ");
		scanf(" %s", data.address[i]);
	}
	
	for (i=0; i<=9; i++) {
		if (data.salary[i] > 10000) {
			printf("\nEmploye ID : %d", data.id[i]);
			printf("\nEmploye Name : %s", data.name[i]);
			printf("\nEmploye Salary : %d", data.salary[i]);
			printf("\nEmploye Address : %s", data.address[i]);
		}
	}
	
	return 0;
}

