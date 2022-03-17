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
        while(j<=n)
        {
            if(i+j-1<n)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
}