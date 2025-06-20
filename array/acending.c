//WAP to sort the arary in acending order
#include <stdio.h>

int main() { // declaring main function
    int i, j, temp; //  Taking integer variables
    int array[5] = {1, 4, 3, 2, 8}; // Array numbers

    for(i = 0; i <=4; i++) { // initializing for loop I which controls the first index
        for(j = 1; j <=4; j++) { // initializing nested for loop J which controls the second index
        
            // SWAPPING logic
            if(array[j] > array[j + 1]) { //
                temp = array[j]; //
                array[j] = array[j + 1]; //
                array[j + 1] = temp; //
            }
        }
    }
    
    // Printing the sorted values w the help of for loop
    printf("Sorted array in ascending order:\n"); 
    for(i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
