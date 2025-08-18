#include<stdio.h>
int main()
{
    float weight;
    printf("Enter the weight in grams");
    scanf("%f", &weight);

    printf("The entered weight is equal to %f kg", weight/1000);
    return 0;
}