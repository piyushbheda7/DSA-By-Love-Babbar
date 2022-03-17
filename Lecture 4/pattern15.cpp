#include<iostream>
using namespace std;

int main()
{
    int n ; 
     
    cout<<"Enter A Number : ";
    cin>>n;

    int i = 0 ;
    char ch = 'A' ; 
    while(i<n)
    {
        int j = 0 ;
        while(j<=i)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++ ;
    }
}