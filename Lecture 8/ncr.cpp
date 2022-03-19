#include<iostream>
using namespace std;

int nCr(int n , int r);

int fac(int n);

int main()
{
    int n , r ;

    cout<<"Enter The Value of N :" ;
    cin>>n ;
    cout<<endl;

    cout<<"Enter The Value Of R : ";
    cin>>r ; 
    cout<<endl;
    
    // cout<<fac(n);
    cout<<"nCr("<<n<<","<<r<<") is : "<< nCr(n,r);
    
}

int nCr(int n , int r )
{
    return fac(n)/(fac(r)*fac(n-r)) ;
}

int fac(int n)
{
    int fact = 1 ;
    // if(n==0) return 1 ;
    for(int i = 1 ; i <= n ; i++)
    {
        fact *= i ;
    }
    return fact ;
}