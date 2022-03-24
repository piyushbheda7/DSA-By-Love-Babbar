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
            ans = mid;
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
    return ans;
}

int lastOccur(int arr[], int size , int key)
{
    int start = 0 ; 
    int end = size - 1 ;
    int mid = start + (end - start)/2 ;
    int ans = -1;

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
    int arr[] = {1 ,2 ,3  ,3 ,3,3, 3,4 ,5};
    int total = lastOccur(arr,9,3) - firstOccur(arr,9,3) + 1;
    cout<<"Total No Of Occurence of 3 is :"<<total<<endl;
}