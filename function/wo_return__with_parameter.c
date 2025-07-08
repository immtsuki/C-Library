//WAP to find the area of circle ( W/o return / w parameter

#include <stdio.h> 
const double pie=22/7;
double radius;
double result;
void main () {
	printf("Enter radius : ");
	scanf("%lf", &radius);
	
	result=area(result);
	
	printf("\nArea : %.3lf", result);
	
}

area(result) {
	result=pie * radius * radius;
}
