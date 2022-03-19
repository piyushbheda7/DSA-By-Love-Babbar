#include<iostream>
using namespace std;

bool isEven(int n );

int main()
{
    int n ; 

    cout<<"Enter A Number : ";
    cin>>n ;
    cout<<endl;
    // cout<<isEven(n)<<endl;
    if(isEven(n)) cout<<n<<" is Even Number " ;
    else cout<<n<<" is Odd Number ";
}

bool isEven(int n)
{
    if(n%2 == 0) return true ;
    else return false ;
}