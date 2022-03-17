#include<iostream>
using namespace std;

int main()
{
    int n ;
    
    cout<<"Enter A Number : ";
    cin>>n;

    int i = 0 ; 
    while(i<n)
    {
        char ch = 'A' ;
        int j = 0 ;
        while(j<n)
        {
            // char ch = 'A' + j - 1 ;
            cout<<ch<<" ";
            ch = ch + 1 ;
            j = j + 1 ;
        }
        cout<<endl;
        i = i + 1 ;
    }
}