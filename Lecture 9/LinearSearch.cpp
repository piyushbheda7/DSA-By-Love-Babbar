#include<iostream>
using namespace std;

bool IsKeyPresent(int arr[] , int n , int key);

int main()
{
    int a[10] = { 22 , 3 , -5 , 2 , 9 , 10 , 44 , -1 , 19 , 15};

    int key ;
    cout<<"Enter The Key Which You Want To Search : ";
    cin>>key ;

    bool found = IsKeyPresent(a , 10 , key);

    if(found) cout<<key<<" is present in the array";
    else cout<<key<<" is not present in the array";
}

bool IsKeyPresent(int arr[] , int n , int key)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(key == arr[i]) return 1 ;
    }
    return 0 ;
}