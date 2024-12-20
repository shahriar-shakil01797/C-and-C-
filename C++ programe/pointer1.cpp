#include<iostream>
using namespace std;
int main()

{

    int num1,num2, *p1, *p2,sum;
    cout<<"Enter First number : = ";
    cin>>num1;
    cout<<"Enter Second Number : =";
    cin>>num2;
    p1=&num1;
    p2=&num2;

    sum= *p1 + *p2;
    cout<<endl;
    cout<<"1st Number is = "<<num1<<endl;
    cout<<"2nd Number is = "<<num2<<endl;

    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<"The sum is = "<<sum;

    return 0;






}
