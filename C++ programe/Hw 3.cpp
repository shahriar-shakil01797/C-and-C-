//Question : Write a program to print the address of a variable whose value is input from user.

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"\n Please!Enter the Number:= ";
    cin>>num;
    cout<<endl;

    cout<<"Here The Address of num := "<<&num;
    cout<<endl;

    return 0;
}
