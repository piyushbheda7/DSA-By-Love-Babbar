#include<iostream>
using namespace std;

int main()
{
    int n ;

    cout<<"Enter A Number : ";
    cin>>n;

    int count = 0 ;
    
    while(n != 0)
    {
        if(n&1) count++ ;
        n = n >> 1 ;
    }

    if(count == 1) cout<<true ;
    else cout<<false ;
}