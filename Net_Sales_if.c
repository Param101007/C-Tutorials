#include<stdio.h>
int main()
{
    int G,N,D;

    printf("Enter your gross sales");
    scanf("%d", &G);

    if(G<10000)
    {   D= (5*G)/100;
        N= G-D;
        printf("Net sales after deducting discount is %d", N);
    }

    else if (G>=10000 && G<20000)
    {
        D= G/10;
        N= G-D;
        printf("Net sales after deducting discount is %d", N);
    }

    else
    {   
        D= (15*G)/100;
        N= G-D;
        printf("Net sales after deducting discount is %d", N);
    } 
    return 0;
    
}