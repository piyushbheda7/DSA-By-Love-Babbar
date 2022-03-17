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
        while(j<=n-i+1)
        {
            cout<<j<<" ";
            j++;
        }
        int k = 1 ;
        while(k<i)
        {
            cout<<"* ";
            k++;
        }
        int space = i - 1;
        while(space)
        {
            cout<<"* ";
            space--;
        }
        j--;
        while(j)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}