#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n , number = 0 , i = 0; 

    cout<<"Enter A Number : ";
    cin>>n;

    while(n!=0)
    {
        int bit = n & 1 ;

        number = (bit * pow(10,i)) + number ;
        n = n >> 1 ;
        i++;
    } 
    cout<<number;
}