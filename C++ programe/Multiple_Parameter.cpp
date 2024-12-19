#include<iostream>
using namespace std;

template< class mytemplate1 , class mytemplate2>
auto math(mytemplate1 a,mytemplate2 b)
{
    return a+b;
}
int main()
{
   cout<<"summation = "<<math(5,4.5);
   return 0;
}

