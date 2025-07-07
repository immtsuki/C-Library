//WAP to find the area of triangle ( return_no-parameter)
#include <stdio.h>
int length, breadth, result;

int area();

int main () {
	
	printf("\nLength : ");
	scanf("%d", &length);
	printf("\nBreadth : ");
	scanf("%d", &breadth);
	
	result=area();
	
	printf("\n\tArea : %d", result);
	
	return 0;
	
}

int area() {
	return length*breadth;
}

