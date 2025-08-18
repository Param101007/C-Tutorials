#include<stdio.h>
int main()
{
    float side;
    printf("Enter the side of square");
    scanf("%f", &side);

    printf("Perimeter of the square is %.2f units \n", side*4);
    printf("Area of the square is %.2f units \n", side*side);
    return 0;
}