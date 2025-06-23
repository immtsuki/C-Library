//WAP to find out the largest and smallest element in the array.
// user input is necessary

#include <stdio.h> 
int main () {
	int element[10];
	int i, j;
	
	for(i=0; i<10; i++) {
		printf("\nEnter num %d : ", i+1);
		scanf("%d", &element[i]);
	}
	
	int large = element[0], small = element[0];
	
  	for (i = 0; i < 10; i++) {
  		if(element[i] > large) {
  			large=element[i];
		  }
		if(element[i] < small) {
			small=element[i];
		}
    }
    
    printf("\nLargest : %d\nSmallest : %d ", large, small);
    
    return 0;
}
