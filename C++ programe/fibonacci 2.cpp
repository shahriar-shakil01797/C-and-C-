#include<iostream>
using namespace std;

int main()

{
    int num,fibo,frist=0,second=1,count=0;
    cout<<"Please!Enter the num:=";
    cin>>num;
    cout<<endl;

    while(count<num)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=frist+second;
            frist=second;
            second=fibo;
        }
        cout<<"  "<<fibo;
        count++;
    }
    cout<<endl;
    return 0;
}
