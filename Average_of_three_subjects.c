#include<stdio.h>
int main()
{
    int A,B,C,Av;
    printf("Enter your marks in all three subjects");
    scanf("%d %d %d",&A,&B,&C);

    Av=(A+B+C)/3;

    if (Av>=70)
    {printf("You have passed with distinction");}
    else if(Av>=35 && Av<70)
    {   
        if (Av>=60 && Av<70)
        {printf("You have passed with First class");}
        if(Av>=50 && Av<60)
        {printf("You have passed with Second class");}
        if(Av>=35 && Av<50)
        {printf("You have passed with third class");}
    }
    else
    {printf("You are fail");}
    
    return 0;
    
}