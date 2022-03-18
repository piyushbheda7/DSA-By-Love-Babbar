#include<iostream>
using namespace std;

int main()
{
    int n , flag = 0; 

    cout<< "Enter A Number : ";
    cin>>n ;

    for(int i = 2 ; i < n ; i++)
    {
        if(n%i == 0)
        {
            flag = 1 ;
            cout << n << " is not prime Number....." << endl ;
            break;
        }
    }
    if(flag == 0)
    {
        cout<< n << " is prime number....." ; 
    }
}