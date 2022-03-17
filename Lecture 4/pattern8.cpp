#include<iostream>
using namespace std;

int main()
{
    int n ; 

    cout<<"Enter A Number : " ;
    cin>>n ;

    int i = 1 ;
    while(i <= n )
    {
        int j = i ;
        while(j < 2*i)
        {
            cout<<j<<" ";
            j = j + 1 ;
        }
        cout<<endl;
        i = i + 1 ;
    }
}