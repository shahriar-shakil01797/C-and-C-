#include<iostream>
using namespace std;

class student{
      public:
          int id;
          double cgpa;

      void display(){
       cout<<"Id = "<<id;
       cout<<endl;
       cout<<"cgpa ="<<cgpa;
       cout<<endl;
      }
};





int main(){

   student shakil;
   shakil.id=1000;
   shakil.cgpa=3.55;
   shakil.display();

   student maisha;
   maisha.id=2000;
   maisha.cgpa=3.98;
   maisha.display();

}
