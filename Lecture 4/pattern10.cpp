#include<iostream>
using namespace std;

int main()
{
    int n ; 
    
    cout<<"Enter A Number : ";
    cin>>n;

    int i = 0 ;
    // char ch = 'A' ;

    while(i<n)
    {
        int j = 0 ;
        while(j<n)
        {   
            char ch = 'A' + i ;
            cout<<ch<<" ";
            // cout<<ch<<" ";
            j = j + 1 ;
        }
        cout<<endl;
        // ch = ch + 1 ;
        i = i + 1 ;
    }
}