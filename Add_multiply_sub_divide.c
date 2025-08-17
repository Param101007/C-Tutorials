#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter a");
    scanf ("%f", &a);

    printf("Enter b");
    scanf ("%f", &b);

    printf("The sum of a and b is %f. \n", a+b); 
    printf("The difference of a and b is %f. \n", a-b);
    printf("The product of a and b id %f. \n", a*b);
    printf("The division of a and b is %f. \n", a/b);
    return 0;
}