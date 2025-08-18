#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number of which you want to check divisibility by 7");
    scanf("%d", &a);

    if(a%7==0)
    {printf("The given number is divisible by 7");}
    else
    {printf("The given number is not divisible by 7");}
}