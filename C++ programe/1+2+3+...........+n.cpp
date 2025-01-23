// 1+2+3+............+n

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,sum=0,n;

    cout<<"Enter The number"<<endl;
    cin>>n;

    for( i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"The result is:="<<sum<<endl;


    getch ();
}

