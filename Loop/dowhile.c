//WAP to add a number repeatedly untill and unless user press y
#include <stdio.h>
int main () {
	int num1, num2;
	char check;
	do {
		printf("\nEnter num 1 : ");
		scanf("%d", &num1);
		printf("\nEnter num 2 : ");
		scanf("%d", &num2);
		printf("\n%d + %d = %d", num1, num2, num1+num2);
		printf("\nDo you want to continue ? (Y/n)");
		scanf(" %c", &check);
	} while ( check =='y' || check =='Y');
	return 0;
}
