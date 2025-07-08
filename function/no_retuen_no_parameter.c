//WAP to find the area of circle ( W/o return / w/o parameter

#include <stdio.h> 
const double pie=22/7;
int radius;
double result;
void main () {
	printf("Enter radius : ");
	scanf("%d", &radius);
	
	area();
	
	printf("\nArea : %.3lf", result);
	
}

area() {
	result=pie * radius * radius;
}
