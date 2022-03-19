#include<iostream>
using namespace std ;

int ap(int n);

int main()
{
    int n ; 
    cout<<"ENter A Number : ";
    cin>>n ;

    cout<<"Arithmetic Progression is : "<<ap(n); 
}

int ap(int n)
{
    return (3*n + 7);
}