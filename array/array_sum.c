//WAP to find the sum of given array
//loop is mandatory in array

#include <stdio.h> // importing stdio header file
int main () { // creating main funciton
	int array[5]={1, 4, 3, 2, 8}; // taking literals array values
	int i, sum=0; // creating variables for loop and sum
	
	for(i=0; i<=4; i++) { // starting FOR loop
		sum=sum+array[i]; // sum is equals to sum + array[i-current loop value]
	}	
	printf("%d", sum); // printing value of sum
	
	return 0; // returning value
}


