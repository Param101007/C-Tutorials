#include<stdio.h>
int main()
{
    int rupees;
    printf("Enter the amount in rupees");
    scanf("%d", &rupees);

    printf("That amount is equal to %d dollars", rupees/48 );
    return 0;
}