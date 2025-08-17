#include<stdio.h>
int main()
{
    float F;
    printf("Enter temperature measured on fahrenheit scale");
    scanf("%f", &F);
    
    printf("Temperature = %f degrees celcius", (F-32)*5/9);

    return 0;

}
