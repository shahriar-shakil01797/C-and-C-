#include<iostream>
using namespace std;

int main()
{
    float n,sum=0;
    cout<<"Enter any Number (n) = ";
    cin>>n;
    float i=1;
    do{

        sum=sum+(i*i*i*i*i);
        i=i+1;
    }while(i<=n);

    cout<<"Sum : "<<sum;
}
