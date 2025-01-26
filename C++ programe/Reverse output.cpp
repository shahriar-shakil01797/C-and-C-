#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,i;
    cout<< "Enter the value of n : ";
    cin>> n;

    int number [n];

    for(i=0; i<n; i++)
    {
        cout<< "Shakil enter the value of number "<< i+1<< " : ";
        cin>> number [i];
        cout<<endl;

    }
    cout<<"The reverse order is : ";

    for(i=n-1; i>=0; i--)
        {
            cout<<number[i]<< " ";
            n--;
        }

    getch();
}
