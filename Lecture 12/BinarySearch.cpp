#include<iostream>
using namespace std;


int BinarySearch(int arr[] , int size , int key)
{
    int start = 0 ; 
    int end = size - 1 ;

    // int mid = (start + end)/2 ;

    // chalaki because start = 2^31 and end = 2 ^ 31 
    // then start + end become out of int range.......
    int mid = start + (end - start)/2 ;
    while (start<=end)
    {
        if(key == arr[mid])
        {
            return mid ;
        }

        if(key > arr[mid])
        {
            start = mid + 1 ;
        }
        else
        {
            end = mid - 1 ;
        }
        mid = start + (end - start)/2 ;
    }
    return -1 ;
    
}

int main()
{
    int even[6] = { -1 , 0 , 3 , 8 , 12 , 22 };
    int odd[5] = { 4 , 5 , 6 , 10 , 23  };

    int evenIndex = BinarySearch(even , 6 , 12);
    int oddIndex = BinarySearch(odd , 5 , 10);

    cout<<"Index of 8 in even array is : "<<evenIndex<<endl;
    cout<<"Index of 10 in odd array is : "<<oddIndex<<endl;
}