//WAP to determine if number 1 or 2 is greater
#include <stdio.h>
int main () {
	int num1, num2;
	
	printf("Enter num1 : ");
	scanf("%d", &num1);
	printf("Enter num2 : ");
	scanf("%d", &num2);
	
	if(num1 != num2) {
		if (num1 > num2) {
			printf("num 1 is greater");
		}
		else {
			printf("num 2 is greater");
		}
	}
	else {
		pritnf("Both numbers are equal");
	}
	return 0;
}

