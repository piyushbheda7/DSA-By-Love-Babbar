#include<iostream>
using namespace std;

void update(int arr[], int n); 

int main()
{
    int arr[3] = { 1 , 2 , 3 };

    update(arr , 3);
    // This is because of we are passing base address of array
    for(int i = 0 ; i < 3 ; i++)
    {
        cout<< arr[i] << " ";
    }
}

void update(int arr[] , int n)
{
    cout<<"Inside the function" << endl;

    arr[0] = 120 ;

    for(int i = 0  ; i < n ; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}