/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std ;

void insertionSort(int arr[] , int n );

int main()
{
    int arr[] = { 10 , 1 , 5 , 7 , 25 , 23};
    int size = sizeof(arr) ;
    insertionSort(arr , size);
    for(int i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0 ;
}

void insertionSort(int arr[] , int n)
{
    int key ;
    for(int i = 0 ; i < n -1 ; i++)
    {
        key = arr[i+1];
        int j = i ;
        for( ; j >= 0 ; j--)
        {
            if(arr[j]>key)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break ;
            }
        }
        arr[j+1] = key ;
    }
}
