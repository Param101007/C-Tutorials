#include <stdio.h>
int main()
{
    float T;
    printf("Enter the temperature 'T' measured on celcius scale");
    scanf("%f", &T);

    printf("Temperature T = %f fahrenheits",(T*9/5)+32);

    return 0;
}
