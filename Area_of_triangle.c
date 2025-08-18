#include<stdio.h>
int main()
{
    float H,L;
    printf("Enter height of the triangle");
    scanf("%f", &H);

    printf("Enter length of the triangle");
    scanf("%f", &L);

    printf("Area of the triangle is %.2f units", H*L/2);
    return 0;
}