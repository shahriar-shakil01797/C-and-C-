#include<iostream>
using namespace std;

class student
{

public:
    int id;
    double cgpa;

    void display()
    {

        cout<<"Id = "<<id<<"\tCgpa = "<<cgpa;
        cout<<endl;
    }
    void setValue(int x,double y)
    {
        id=x;
        cgpa=y;
    }
};

int main()
{

    student shakil,nabil,sami;

    shakil.setValue(100,3.55);
    shakil.display();

    nabil.setValue(101,3.55);
    nabil.display();

    sami.setValue(101,3.55);
    sami.display();
}
