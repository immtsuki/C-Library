//WAP to sort the given array in acending and decending order
#include <stdio.h>

int main() { 
    int i, j, temp; 
    int array[5] = {1, 4, 3, 2, 8}; 

    for(i = 0; i <=4; i++) { 
        for(j = i+1; j <=4; j++) { 
        
            if(array[i] > array[j]) { 
                temp = array[i]; 
                array[i] = array[j]; 
                array[j] = temp; 
            }
        }
    }
    
    printf("Sorted array in ascending order:\n"); 
    for(i = 0; i <= 4; i++) {
        printf("%d ", array[i]);
    }
    printf("\nSorted array in decending order:\n"); 
    for(i = 4; i >= 0; i--) {
        printf("%d ", array[i]);
    }


    return 0;
}


