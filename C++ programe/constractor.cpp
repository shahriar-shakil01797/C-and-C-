#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double cgpa;

    void display()
    {
        cout<<"Id ="<<id<<"\tCgpa ="<<cgpa;

    }

    student(int x,double y)
    {
        id=x;
        cgpa=y;

    }
};


int main()
{
    student shakil(100,3.55);
    shakil.display();
}
