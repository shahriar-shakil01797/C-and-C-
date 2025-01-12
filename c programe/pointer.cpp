// Write a program to print the address of the pointer to a variable whose value is input from user.

#include<iostream>
using namespace std;

int main()

{
    int x;

    cout<<" \n   Please!Enter the value of x:= ";
    cin>>x;
    cout<<endl;

    int *y;
    y=&x;

    cout<<"   Here the Address of y is:= "<<&y;
    cout<<endl;

    return 0;
}

