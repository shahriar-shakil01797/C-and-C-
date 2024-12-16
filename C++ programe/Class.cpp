#include<iostream>
using namespace std;

class student
{
public:
    int id;
    double cgpa;

};

int main()
{
    student shakil;
    shakil.id=100;
    shakil.cgpa=3.55;

    cout<<shakil.id;
    cout<<endl;
    cout<<shakil.cgpa;
    cout<<endl;


    student shakila;
    shakila.id=101;
    shakila.cgpa=3.45;

    cout<<shakila.id;
    cout<<endl;
    cout<<shakila.cgpa;
    cout<<endl;
}

