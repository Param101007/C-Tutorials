#include<stdio.h>
int main()
{
    float dollars;
    printf("Enter amount in dollars");
    scanf("%f", &dollars);

    printf("The amount is equal to %f pounds", dollars/1.4583);
    return 0;
}
