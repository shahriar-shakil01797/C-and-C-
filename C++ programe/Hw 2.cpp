//Write a program in C++ to store n elements in an array and print the elements using pointer.

#include<iostream>
using namespace std;

int main()

{
  int i,num;
  cout<<"Number of elements in array:= ";
  cin>>num;
  cout<<endl;

  int array[num];
  for(i=0; i<num; i++)
  {
    cout<<"Enter Elements "<< i+1<<" = ";
    cin>>array[i];
  }
  cout<<endl;

  int *j;
  j=&array[0];

  for(i=0; i<num; i++)
  {
      cout<<"Address: "<<j;
      cout<<"  Elements: "<<*j;
      cout<<endl;
      j++;
  }

    cout<<endl;
    return 0;
}

