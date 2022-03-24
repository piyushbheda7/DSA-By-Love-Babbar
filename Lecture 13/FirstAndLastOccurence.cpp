#include<iostream>
using namespace std;

int firstOccur(int arr[] , int size , int key)
{
    int start = 0 ; 
    int end = size - 1 ;
    int mid = start + (end - start)/2;
    int ans = -1 ;

    while(start<=end)
    {
        if(key == arr[mid])
        {
            ans = mid ;
            end = mid - 1 ;
        }
        else if(key > arr[mid])
        {
            start = mid + 1 ;
        }
        else if(key < arr[mid])
        {
            end = mid - 1 ;
        }
        mid = start + (end - start)/2;
    }
    return ans ;
}

int lastOccur(int arr[], int size , int key)
{
    int start = 0 ; 
    int end = size - 1 ;
    int mid = start + (end - start)/2 ;
    int ans = -1 ;

    while (start<=end)
    {
        if(key == arr[mid])
        {
            ans = mid ;
            start = mid + 1 ;
        }
        else if(key > arr[mid])
        {
            start = mid + 1 ;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans ;
    
}

int main()
{
    int arr[5]  = { 1 , 2 , 3 , 3 ,5} ;

    cout<<"First Occurence Of 3 is : "<<firstOccur(arr,5,3)<<endl;
    cout<<"First Occurence Of 3 is : "<<lastOccur(arr,5,3)<<endl;
}