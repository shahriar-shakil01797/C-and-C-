#include<iostream>
using namespace std;

template<class mytemplate>
mytemplate math(mytemplate a,mytemplate b)
{
    return a+b;
}

int main()

{
    cout<<math(10,20)<<endl;
    cout<<math(10.6,20.4);


    return 0;
}
