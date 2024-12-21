#include<iostream>
using namespace std;
int main()
{
    float n ,sum=0;
    cout<<"Enter Number = ";
    cin>>n;
    float i=1;
    do{
        sum=sum + i/2;
        i=i+1;
    }while(i<=n);

    cout<<"sum = "<<sum;

}


