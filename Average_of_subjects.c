#include<stdio.h>
int main()
{
    int P,C,M;
    printf("Enter the marks of subject-1");
    scanf("%d", &P);

    printf("Enter the marks of subject-2");
    scanf("%d", &C);

    printf("Enter the marks of subject-3");
    scanf("%d", &M);

    printf("The sum of all marks is %d \n", P+C+M);
    printf("Average of these three subjects is %d \n", (P+C+M)/3);
    return 0;
}