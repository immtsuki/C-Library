//WAP to perform addition, subtractoin, multipication & division
#include <stdio.h> 
int main () {
	double num1, num2, option;
	char check;
	
	do {
		printf("\n Simple Calculator \n 1. Addition \n2. Subtraction \n3. Multipication \n4. Division \n");
		printf("\nChoose your option : ");
		scanf("%lf", &option);
		
		printf("Enter num 1 :");
		scanf("%lf", &num1);
		printf("Enter num 2:");
		scanf("%lf", &num2);
		
		if (option == 1) {
			printf("\n%lf + %lf = %d", num1, num2, num1+num2);
		}
		else if (option == 2) {
			printf("\n%lf - %lf = %d", num1, num2, num1-num2);
		}
		else if (option == 3) {
			printf("\n%lf x %d = %lf", num1, num2, num1*num2);
		}
		else if (option == 4) {
			printf("\n%lf / %d = %lf", num1, num2, num1/num2);
		}
		else {
			printf("\nselect option");
		}
		printf("\nDo you want to continue ? (Y/n)");
		scanf(" %c", &check);
		
	} while (check == 'y' || check == 'Y');
	return 0;
}
