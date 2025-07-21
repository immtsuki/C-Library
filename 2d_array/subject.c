//WAP to rank n students based on total marks and display the rank list.

#include <stdio.h>
int main () {
	int n, i;
	const int math = 100, c = 100, eco = 100;
	
	int total_marks = math + c + eco;
	
	printf("Number of students : ");
	scanf("%d", &n);
	
	int marks[n][3], total_obtained[n], avg[n];
	char stu_name[n][50];
	sub
	for (i=0; i<n; i++) {
		printf("\nName of student %d : ",i+1);
		scanf("%s", &stu_name[i]);
		
		printf("\nMarks on Math : ");
		scanf("%d", &marks[i][0]);
		printf("\nMarks on C programming : ");
		scanf("%d", &marks[i][1]);
		printf("\nMarks on Eco : ");
		scanf("%d", &marks[i][2]);
		
		total_obtained[i] = marks[i][0] + marks[i][1] + marks[i][2];
		avg[i]=total_obtained[i]/3;
	}
	
	
    printf("\n\tList of student marks:\n");
    for(i=0; i<n; i++) {
    	if (marks[i][0] < 40 || marks[i][1] < 40 || marks[i][2] < 40) {
    		printf("%s have scored %d/%d ( NG )", stu_name[i], total_obtained[i], total_marks);
			}
    		else {
    			printf("\n");
    			if (avg[i] >= 90) {
    				printf("%s have scored %d/%d ( A+ )", stu_name[i], total_obtained[i], total_marks);
				}
				else if(avg[i]  >= 80) {
    				printf("%s have scored %d/%d ( A )", stu_name[i], total_obtained[i], total_marks);
				}
				else if(avg[i]  >= 70) {
    				printf("%s have scored %d/%d ( B+ )", stu_name[i], total_obtained[i], total_marks);
				}
				else if(avg[i] >= 60) {
    				printf("%s have scored %d/%d ( B )", stu_name[i], total_obtained[i], total_marks);
				}
				else if(avg[i] >= 50) {
    				printf("%s have scored %d/%d ( C+ )", stu_name[i], total_obtained[i], total_marks);

				}
				printf("\n");
		}
	}

	return 0;
}
