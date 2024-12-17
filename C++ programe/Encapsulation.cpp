#include<iostream>
using namespace std;

class student
{
private:
    string name;
public:
    void setName(string x)
    {
        name=x;

    }
    string getName()
    {
        return name;

    }
};

int main()
{

    student shakil;
    shakil.setName("Hello!");

    cout<<shakil.getName();

    return 0;
}
