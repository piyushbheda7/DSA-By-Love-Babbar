#include<iostream>
using namespace std;

bool isPrime(int n);

int main()
{
    int n ; 

    cout<<"Enter The Number : ";
    cin>>n;
    
    if(isPrime(n)) cout<<n<<" is Prime Number....";
    else cout<<n<<" is Not Prime Number......";
}

bool isPrime(int n)
{
    for(int i = 2 ; i < n ; i++)
    {
        if(n%i == 0) return false ;
    }
    return true ;
}