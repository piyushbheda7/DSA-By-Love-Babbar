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
        int j = n , k = i - 1 , temp = i;
        while(k>0)
        {
            cout<<"  ";
            k--;
        }
        while(j>=i)
        {
            cout<<temp<<" ";
            temp++;
            j--;
        }
        cout<<endl;
        i++;
    }
}