//WAP to determine whether a number is positive or negative
#include <stdio.h>
int main () {
	int num;
	
	printf("Enter a num :  ");
	scanf("%d", &num);
	
	if(num > 0) {
		printf("\n Positive Number");
	}
	else if (num < 0) {
		printf("\n Negative Number");
	}
	else {
		printf("Its neither Positive nor NEgative");
	}
	return 0;
}
