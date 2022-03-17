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
        int j = n , k = i - 1;
        while(k>0)
        {
            cout<<"  ";
            k--;
        }
        while(j>=i)
        {
            cout<<"* ";
            j--;
        }       
        cout<<endl;
        i++;
    }
}