#include<stdio.h>
int main()
{
    int a,b,temp;

    a=5;
    b=10;

    temp=a;
    a=b;
    b=temp;

    printf("Answer of a : %d\n",a);
    printf("Answer of b : %d",b);
    return 0;

}
