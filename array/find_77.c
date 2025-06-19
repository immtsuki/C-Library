//WAP to check whether a number 77 is in the given array or not

#include <stdio.h> 
int main () {
	int array[5]={1, 4, 3, 2, 8}; 
	int i, check, valid;
	
	for(i=0; i<=4; i++) {
		check =array[i] % 77;
		if (check == 0) {
			valid=check;
		}
	}
	
	if (valid == 0) {
		printf("There is 77");
	}
	else {
		printf("there is not 77");
	}

	return 0;
}
