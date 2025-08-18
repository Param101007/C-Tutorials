#include<stdio.h>
int main()
{
    int principle;
    float rate,time;

    printf("Enter principle amount");
    scanf("%d", &principle);
    
    printf("Enter the rate of interest on which loan has been taken");
    scanf("%f", &rate);

    printf("Enter time in years of loan");
    scanf("%f", &time);

    printf("Total interest on this loan would be %.2f rupees", (principle*rate*time)/100);
    return 0;

}