#include<iostream>
using namespace std;

int nthFib(int n);

int main()
{
    int n ;
    cout<<"Enter the Nth Number : ";
    cin>>n;

    cout<<"Nth Number Of Fibonacci is : "<<nthFib(n);
}

int nthFib(int n)
{
    int a = 0 ;
    int b = 1 ;
    int nextFib ;
    if(n == 1) return a ;
    if(n == 2) return b ;
    for(int i = 1 ; i <= n - 2 ; i++)
    {
        nextFib = a + b ;
        a = b ;
        b = nextFib ;
    }
    return nextFib ;
}