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
        char ch = 'A' + i ;
        int j = 0 ; 
        while(j<=i)
        {
            // char ch = 'A' + i + j ;
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}