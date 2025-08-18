#include<stdio.h>
int main()
{
    int G,N,A,D;

    printf("Enter your gross salary");
    scanf("%d", &G);

    if (G>=5000 && G<10000)
    {
        A=(7*G)/100;
        D=(2*G)/100;
        N= G+A-D;

        printf("Your allowances are %d rupees \n", A);
        printf("Your deduction would be %d rupees \n", D);
        printf("Your net salary is %d rupees", N);
    }
    else
    {
        A=G/10;
        D=(3*G)/100;
        N= G+A-D;

        printf("Your allowances are %d rupees \n", A);
        printf("Your deduction would be %d rupees \n", D);
        printf("Your net salary is %d rupees", N);
    }
    return 0;
}