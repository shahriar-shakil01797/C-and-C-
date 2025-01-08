#include<stdio.h>
int main()
{
    int upper,lower;
    printf("Enter Any Uppercase character : = ");
    scanf("%c",&upper);
    lower=tolower(upper);
    printf("The Answer is lowercase is : = %c",lower);
    return 0;
}


