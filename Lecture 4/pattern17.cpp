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
        int j = 0 ;
        while(j<=i)
        {
            char ch = 'A' + n - 1 - i + j ;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}