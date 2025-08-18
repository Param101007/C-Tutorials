#include<stdio.h>
int main()
{
    int minutes;
    printf("Enter minutes to convert to hours");
    scanf("%d", &minutes);

    printf("Given minutes can be converted into %d hours", minutes/60);
    return 0;
}