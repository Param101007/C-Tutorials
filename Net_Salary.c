#include<stdio.h>
int main()
{
    int N,G,A,D;
    printf("Enter your gross salary \n");
    scanf("%d", &G);

    A=G/10;
    D=(3*G)/100;

    printf("Your allowance is %d INR \n", A);
    printf("Deduction would be %d INR \n", D);

    printf("Net salary would be %d INR", G+A-D);
}