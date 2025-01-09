#include<stdio.h>
int main()

{
    double a,b,sum1,sum2,sum3;

    printf("Please!Enter first number = ");
    scanf("%lf",&a);
    printf("Please!Enter second number = ");
    scanf("%lf",&b);

    sum1=a+b;
    sum2=a-b;
    sum3=a/b;

    printf("The sum is = %lf\n",sum1);
    printf("The sum is = %lf\n",sum2);
    printf("The sum is = %lf\n",sum3);
    return 0;

}
