#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n , rem , number = 0 ;

    cout<<"Enter A Number : ";
    cin>>n;
    
    int i = 0 ;
    while(n>0)
    {
        rem = n%2 ;
        number = (rem * pow(10,i)) + number ;
        // number = (number*10) + rem ;
        n = n/2 ;
        i++ ;
    }
    cout<<number;
}