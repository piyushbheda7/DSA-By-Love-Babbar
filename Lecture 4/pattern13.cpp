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
        char ch = 'A' + i;
        int j = 0 ;
        while(j<n)
        {
            // char ch = 'A' + i + j -1 ;
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}