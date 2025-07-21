//WAP to count the total number of even numbers up to 549
#include <stdio.h> 
int main () {
	int i, even=0;
	for (i=2; i<=549; i++) {
		if (i%2 == 0) {
			even++;
		}
	}
	printf("Even Numbers = %d", even);
	return 0;
}

