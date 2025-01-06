#include<stdio.h>
int main()
{

    int a,b;
    a=60;
    b=55;

    a=a-b;//5
    b=a+b;//5+55=60
    a=b-a;//60-5=55

    printf("The Answer of a is = %d\n",a);
    printf("The Answer of b is = %d",b);

}
