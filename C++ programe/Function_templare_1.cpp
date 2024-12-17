#include<iostream>
using namespace std;

template<class mytemplate>
mytemplate math(mytemplate a,mytemplate b)
{

    return a*b;
}


int main()
{
    cout<<math(5,5)<<endl;
    cout<<math(5.4,5.6);

    return 0;
}
