#include<stdio.h>
int main()
{
    int dollars;
    printf("Enter amount in dollars");
    scanf("%d", &dollars);

    printf("The amount you entered is equal to %d rupees(INR)" , dollars*48);
    return 0;
}