#include<iostream>
using namespace std;

int SumOfArray(int arr[] , int n);
int main()
{
    int n ; 

    cout<<"Enter The Size Of Array : ";
    cin>>n;

    int a[n] ;

    cout<<"Enter The Element Of Array : ";
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    
    cout<<"Sum Of Array Element is : "<<SumOfArray(a,n);
}

int SumOfArray(int arr[] , int n)
{
    int sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum += arr[i] ;
    }
    return sum ;
}
