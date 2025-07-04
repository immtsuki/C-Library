#include <stdio.h> 
int main () {
	int mark[5];
	int i;
	double total=0, percentage, average;
	
	printf("Enter your subject mark");

	printf("\n\t C Programming : ");
	scanf("%d", &mark[0]); 
	printf("\n\t Math : "); 
	scanf("%d", &mark[1]); 
	printf("\n\t Account : ");
	scanf("%d", &mark[2]); 
	printf("\n\t English : ");
	scanf("%d", &mark[3]); 
	printf("\n\t Micro : ");
	scanf("%d", &mark[4]); 
			
	total = mark[0] + mark[1] + mark[2] + mark[3] + mark[4];

	average = total / 5;
	percentage = total / 500 * 100;
	
	if(mark[0] < 40 || mark[1] < 40 || mark[2] < 40 || mark[3] < 40 || mark[4] < 40 ) {
			printf("\nYou have failed the exam due to failing in one of the subject");
		}
	else {
			if(average >= 90) {
				printf("\nYou have scored %3.lf and got A+  ", percentage);
			}
			else if (average < 90 && average >=80) {
				printf("\nYou have scored %3.lf and got A ", percentage);
			}
			else if (average < 80 && average >=70) {
				printf("\nYou have scored %3.lf and got B+ ", percentage);
			}
			else if (average < 70 && average >=60) {
				printf("\nYou have scored %3.lf and got B ", percentage);
			}
			else {
				printf("\nYou have scored %3.lf and got C+ ", percentage);
			}
	}
}
