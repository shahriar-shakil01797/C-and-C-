#include<iostream>
using namespace std;

int main()

{
    int n,row,col;

    cout<<"Please!Enter the n:=";
    cin>>n;
    cout<<endl;

    for (row=1; row<=n; row++)
    {
        for (col=1; col<=n-row; col++)
        {
            cout<<"  "<<col;
        }
        for (col=1; col<=row; col++)
        {
           cout<<"  "<<col;
        }

    }
     cout<<endl;
     return 0;
}
