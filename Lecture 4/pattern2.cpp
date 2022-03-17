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

        // **** j start with 1 **** //

        int j = 1 ; 
        while(j<=n)
        {
            cout<<n-j+1<<" ";
            j = j + 1;
        }

        // **** j start with n **** //
        // int j = n;
        // while(j>0)
        // {
        //     cout<<j<<" ";
        //     j = j - 1;
        // }
        cout<<endl;
        i = i + 1;
    }
}