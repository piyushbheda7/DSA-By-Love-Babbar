#include<iostream>
using namespace std;

void printCounting (int n);

int main()
{
    int n ; 

    cout<<"Enter The Number : ";
    cin>>n ;
    printCounting(n);
}

void printCounting(int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        cout<<i<<" ";
    }
}