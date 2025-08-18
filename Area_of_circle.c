#include<stdio.h>
int main()
{
    float radius;
    printf("Enter the radius of the circle");
    scanf("%f", &radius);

    printf("Area of the circle is %.2f units", (22/7)*radius*radius);
    return 0;
}
