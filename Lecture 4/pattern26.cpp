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
        int j = 1 , space = n - i ;
        while(space>0)
        {
            cout<<"  ";
            space--;
        }
        while(j<=i)
        {
            cout<<j<<" ";
            j++;
        }
        j = j-2 ;
        while(j>0)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}