#include<iostream>
#include<vector>

using namespace std;

void merge(int arr1[] , int n , int arr2[] , int m , int arr[])
{
    int i = 0 , j = 0 , k = 0;
    while(i < n && j < m)
    {
        if(arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++ ;
            k++ ;
        }
        else
        {
            arr[k] = arr2[j];
            j++ ;
            k++ ;
        }
    }

    while(i < n )
    {
        arr[k] = arr1[i] ;
        i++ ;
        k++ ;
    }

    while(j < m)
    {
        arr[k] = arr2[j] ;
        j++ ;
        k++ ;
    }
}

void print(int arr[] , int n )
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr1[] = { 1 , 2 , 3 , 5 , 10 , 15} ;
    int arr2[] = { 3 , 4 , 5} ;

    int arr[9] = {0};

    merge(arr1 , 6 , arr2 , 3 , arr);

    print(arr , 9);
}