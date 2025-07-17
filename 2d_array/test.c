#include <stdio.h>

int i, j, row, column, a_size, b_size;

int main() {
	printf("\n Define row : ");
	scanf("%d", &row);
	printf("\n Define Column : ");
	scanf("%d", &column);

	int A[row][column], B[row][column], sum[row][column];
	
	//a_size=sizeof(A);
	//b_size=sizeof(B);
	
	//if(a_szie == b_size) {
		//Objective
	//}
	//else {
		//Array Dimensions didn't match
	//}
	
	if(row > 0 && column > 0) {
	for(i=0; i<row; i++) {
		for(j=0; j<column; j++) {
			printf("\nEnter Element for Matrix A (%d/%d) : ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	for(i=0; i<row; i++) {
		for(j=0; j<column; j++) {
			printf("\nEnter Element for Matrix B (%d/%d) : ", i+1, j+1);
			scanf("%d", &B[i][j]);
		}
	}
	
	for(i=0; i<row; i++) {
		for(j=0; j<column; j++) {
			sum[i][j] = A[i][j] + B[i][j];
		}
	}
	
	for(i=0; i<row; i++) {
		for(j=0; j<column; j++) {
			printf("\n%d ", sum[i][j]);
		}
		printf("\n");
	}
		
	}
	else {
		printf("array dimension didn't match'");
	}

	
	return 0;
	
}
