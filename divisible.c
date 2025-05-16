//WAP whether a number is divisible by 3 or 7
#include <stdio.h>
int main () {
	
	int num;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
	if (( num%3 == 0) && ( num%7 == 0))
	{
		printf("%d numbers are divisible by 3 & 7", num);
	}
	else if ( (num%3 == 0) && (num%7 != 0))
	{
		printf("%d is only divisible by 3", num);
	} 
	else if ((num%3 != 0) && (num%7 == 0))
	{
		printf("%d is only divisible by 7", num);
	} 
	else {
		printf("%d isn't both divisible by both 3 & 7", num);
	}
	
    return 0;
}
