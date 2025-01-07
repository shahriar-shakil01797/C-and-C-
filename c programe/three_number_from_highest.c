#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter Three Number = ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
        printf("Large num1 = %d",num1);

    else if(num2>num1 && num2>num3)
        printf("Large num2 = %d",num2);

    else
        printf("Large num3 = %d",num3);

    return 0;

}
