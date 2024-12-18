#include<iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    void display1()
    {
        cout<<"Name ="<<name<<endl;
        cout<<"Age ="<<age<<endl;
    }
};

class student:public person
{
public:
    int id;

    void display2()
    {

        cout<<"Id ="<<id<<endl;
        display1();

    }

};

int main()
{

     student s1;
     s1.id=101;
     s1.age=24;
     s1.name="Shakil";
     s1.display2();

     return 0;


}
