#include<stdio.h>
int main()
{
    int bytes;
    printf("Enter space avilable in bytes ");
    scanf("%d", &bytes);
    float kb,mb,gb;
    kb= bytes/1024;
    mb= kb/1024;
    gb=mb/1024;
    printf("Space available is %.2f kb \n", kb);
    printf("Space available is %f mb \n", mb);
    printf("Space available is %f gb \n",gb);
    return 0;
}