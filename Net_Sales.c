#include<stdio.h>
int main()
{
    int N,D;
    printf("Enter your gross sales");
    scanf("%d", &N);

    D=N/10;

    printf("The net sales is %d rupees",N-D);
    return 0;
}