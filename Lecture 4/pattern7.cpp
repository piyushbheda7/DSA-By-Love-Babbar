#include<iostream>
using namespace std;

int main()
{
    int n ; 

    cout<<"Enter A Number : " ;
    cin>>n ;

    int i = 1 , k = 1; 
    while(i <= n )
    {
        k = i ;
        int j = 1 ;
        while(j <= i )
        {
            cout<<k<<" ";
            k = k + 1 ;
            j = j + 1 ;
        }
        cout<<endl;
        i = i + 1 ;
    }
}