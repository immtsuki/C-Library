//WAP to find the area of rectangle ( user input is necessary by using function )

#include <stdio.h>
int area(int, int);
int area(int x, int y) {
	return x*y;
}
int main () {
	int length, breadth, result;
	
	printf("\nLength : ");
	scanf("%d", &length);
	printf("\nBreadth : ");
	scanf("%d", &breadth);
	
	result=area(length, breadth);
	
	printf("\n\tArea : ", result);
	
	return 0;
	
}
