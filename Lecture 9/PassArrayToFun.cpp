#include<iostream>
using namespace std;

void printArray(int arr[], int size) ;
int main()
{
    int arr[10] ;
    int size = 10 ;
    for(int i = 0 ; i < 10 ; i++)
    {
        arr[i] = 1 ;
    }
    printArray(arr,size);
}

void printArray(int arr[], int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
    }
}