#include<iostream>
using namespace std;

int main()
{
    int arr[4] = { 4 , 12 , 8 , 10 } ;
    int max = arr[0] ;
    int min = arr[0] ;
    for(int i = 0 ; i < 4 ; i++)
    {
        if(arr[i] >= max) max = arr[i] ;
        if(arr[i] <= min) min = arr[i] ;
    }

    cout<<"Max : "<<max<<endl<<"Min : "<<min;
}