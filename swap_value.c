// Write a program to swap the value of a & b
#include <stdio.h>
int main ()
{
    int valueA, valueB, swap;
    printf("Input A : ");
    scanf("%d", &valueA);
    printf("Input B : ");
    scanf("%d", &valueB);
    printf("Before Swaping value \n A : %d \n B : %d ", valueA, valueB);
    swap=valueA;
    valueA=valueB;
    valueB=swap;
    printf("\n After swaping value \n A : %d \n B : %d",valueA, valueB);
    return 0;   
}
