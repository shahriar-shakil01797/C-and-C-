#include<stdio.h>
int main()
{
    int upper,lower;
    printf("Enter Any lowercase character : = ");
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("The Answer os Uppercase is : = %c",upper);
    return 0;
}

