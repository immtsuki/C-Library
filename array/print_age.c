//WAP to display the age between 30 - 45

#include<stdio.h>
int main () {
	int age[10]={40,50,51,54,31,43,27,39,44,47};
	int i, j;
	
	for(i=0; i<=9; i++) {
		for (j=30; j<=45; j++) {
			
			if (age[i] == j) {
				printf("\n%d", age[i]);
			}
		}
	}
	return 0;
}
