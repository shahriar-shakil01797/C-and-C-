#include<stdio.h>
int main()
{
    int x=49;
    double result=sqrt(x);
    printf("%.2lf\n",result);

    int x1;
    x1=pow(5,2);
    printf("%d",x1);


    double x2,result1;
    printf("Enter number = ");
    scanf("%lf",&x2);
    result=log(x2);
    printf("The Answer is = %lf",x2,result1);
    return 0;
}
