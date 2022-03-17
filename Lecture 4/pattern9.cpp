#include<iostream>
using namespace std;

int main()
{
    int n ; 
    
    cout<<"Enter A Number : ";
    cin>>n;

    int i = 1 ;
    while(i<=n)
    {
        int j = 1 ;
        while(j<=i)
        {
            cout<<i-j+1<<" ";
            j = j + 1 ;
        }


        // unsigned int k = i ;
        // while(j<=n && k>0)
        // {
        //     cout<<k<<" ";
        //     k = k - 1 ;
        //     j = j + 1 ;
        // }
        cout<<endl;
        i = i + 1 ;
    }
}