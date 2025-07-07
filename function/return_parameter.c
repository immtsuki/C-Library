//WAP to determine whether a number is odd or even by using return type method 
//with parameter

#include <stdio.h>
int num, check;
int main () {
	printf("Enter a number : ");
	scanf("%d", &num);
	
	check=find(num);
	
	if (check == 0) {
		printf("%d is even number", num);
	}
	else {
		printf("%d is odd number", num);
	}
}

int find(int num) {
	return num%2;
}
