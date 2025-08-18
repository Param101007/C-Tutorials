#include<stdio.h>
int main()
{
    int A,B;
    printf("Enter any integer");
    scanf("%d", &A);

    printf("Enter any other integer");
    scanf("%d", &B);

    if(A>B)
    printf("A is greater than B");
    if(A==B)
    printf("A is equal to B");
    if(A<B)
    printf("A is less than B");

    return 0;

}