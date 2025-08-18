#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter the first side of rectangle");
    scanf("%f", &x);
    printf("Enter the second side of rectangle");
    scanf("%f", &y);

    printf("Perimeter of the rectangle is %.2f units \n", 2*(x+y));
    printf("Area of the rectangle is %.2f units \n", x*y);
    return 0;
}