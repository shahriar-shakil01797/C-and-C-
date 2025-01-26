 //Multiplicational Table

#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
    int i,num;
    cout<<"Please!Enter the integer number:-";
    cin>>num;
    cout<<endl;

    i=1;
    while(i<=10)
    {
        cout<<num <<"x" <<i<<"="<<(num*i)<<endl;
        i=i+1;
    }
        getch ();
}
