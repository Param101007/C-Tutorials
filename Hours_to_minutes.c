#include<stdio.h>
int main()
{
    float hours;
    printf("Enter H hours");
    scanf("%f", &hours);

    printf("H hours are equal to %f minutes", hours*60);
    return 0;
}