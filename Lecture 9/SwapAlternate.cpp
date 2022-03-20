#include<iostream>
using namespace std;

int main()
{
    int a[9] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };
    int start = 0 , end ;
    cout<<"Before Swap : ";
    for(int i = 0 ; i < 9 ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    while(start<10)
    {
        end = start + 1 ;
        swap(a[start],a[end]);
        start = start + 2 ;
    }
    cout<<"After Swap : ";
    for(int i = 0 ; i < 9 ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}