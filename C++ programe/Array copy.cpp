#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
    int i,n,array1[10000],array2[10000];

    cout<<"Please!Enter the any Numbers:=";
    cin>>n;
    cout<<endl;


    for(i=0;i<n;i++)
    {
        cout<<"The Array numbers are "<<i+1<<" =";
        cin>>array1[i];
    }



    cout<<"\n Array1:=";
    for(i=0;i<n;i++)
    {
        cout<<array1[i]<<"  ";
    }


    // copy array1 to array2;

    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }

   cout<<endl;

    cout<<"\n Array2:=";
    for(i=0;i<n;i++)
    {
        cout<<array1[i]<<"  ";
    }

    getch ();
}
