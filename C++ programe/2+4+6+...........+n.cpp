// 2+4+6+.......+n

#include<iostream>
using namespace std;

int main()

{
    int i,n,sum=0;
    cout<<"Hellow ! Shakil, Please Enter the Last number:=";
    cin>>n;
    cout<<endl;

    for(i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    cout<<"The Result is :="<<sum<<endl;
    return 0;
}
