// Here I write a program Swap value using pointer

#include<iostream>
using namespace std;

int main()

{
    int x=5, y=10, temp;
    int *ptr1,*ptr2;

    ptr1=&x;
    ptr2=&y;

    temp=*ptr1;
    x=*ptr2;
    y=temp;

    cout<<"The Answer is x:= "<<x;
    cout<<endl;
    cout<<"The Answer is y:= "<<y;
    cout<<endl;
    cout<<endl;

    return 0;
}
