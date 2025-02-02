
//Answer no-(2)
/*Reverse an Integer Number that will only
contain the Odd digits.*/

#include<iostream>
using namespace std;

int main()
{
    int number,quot,rem ;

    cout<< "Please!Enter an Integer Number: ";
    cin>> number;
    cout<<endl;

    quot=number;

    int sum =0;

    while(quot !=0)
    {
        rem= quot%10;
        quot= quot/10;

        if(rem%2 !=0 )
        {
            sum= (sum*10)+rem;
        }
    }

   cout<< "Here The Reverse of the Odd Digit Integer is:= "<< sum ;
   cout<<endl;

   return 0;
}
