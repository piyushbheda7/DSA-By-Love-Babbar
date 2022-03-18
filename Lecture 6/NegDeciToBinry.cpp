#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

int main()
{
    int n , i = 0 , num = 0;
    cout<<"Enter A Number : ";
    cin>>n;

    n *= (-1);

    while(n>0)
    {
        int bit = n & 1 ;

        num = (bit * pow(10,i)) + num ;

        n = n >> 1 ;
        i++ ;
    }
    cout<<num ;
}