
//Answer no-(3) (you can try it sample output 35 )
// decimal number to binary number

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int   i=1, j, rem, dec_num, quot ,bin_num[1000];

    cout << " PLease!Input a decimal number := ";
    cin>> dec_num;
    cout<<endl;

    quot=dec_num;

    while(quot!=0)      //while loop used.
    {
        bin_num[i++]=quot%2;

        quot=(quot/2);
    }

    cout<<" Here The binary number is := ";

    for(j=i-1;j>0;j--)  // for loop used.
    {
        cout<<bin_num[j];
    }
    cout<<endl;
    return 0;
}

