//WAP to determine whether a number is prime or composite

#include <stdio.h> 
int main () {
	int num, i, count=0;
	printf("Enter Num : ");
	scanf("%d", &num);
	
	for ( i=1; i<= num; i++) {
		if (num%i==0) {
			count++;
		}
	}
	if (count == 2) {
		printf("\n %d is Prime", num);
	}
	else if (num <= 1) {
		printf("\n %d is Neither prime not Composite",num);
	}
	else {
		printf("\n %d is composite",num);
	}
	return 0;
}
