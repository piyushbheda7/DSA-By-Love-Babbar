#include<iostream>
using namespace std;

int main()
{
    int a[9] = { 22 , 3  , 2 , 9 , 10 , 44 , -1 , 19 , 15};
    int b[9] , j = 8 ;
    cout<<"Array is : ";
    for(int i = 0 ; i < 9 ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i = 0 ; i < j ; i++)
    {
        int temp = a[j] ;
        a[j] = a[i] ;
        a[i] = temp ;
        j-- ;
    }
    // for(int i = 0 ; i < 10 ; i++)
    // {
    //     b[i] = a[j] ;
    //     j-- ; 
    // }
    cout<<"Reversed Array is : ";
    for(int i = 0 ; i < 9 ; i++)
    {
        cout<<a[i]<<" " ;
    }

}