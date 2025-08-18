#include<stdio.h>
int main()
{
    float weight;
    printf("Enter the weight in kgs");
    scanf("%f", &weight);

    printf("The weight is equal to %f grams", weight*1000 );
    return 0;
}