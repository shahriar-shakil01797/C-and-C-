#include<stdio.h>
int main()
{
    int number;
    printf("Enter number = ");
    scanf("%d",&number);

    if(number>0)
        printf("The Number is positive");

    else if(number<0)
        printf("The Number is Negative");

    else
        printf("The Number is Zero");

    return 0;
}
