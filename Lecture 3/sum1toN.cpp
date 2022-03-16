#include<iostream>
using namespace std;

int main()
{
    int n , i = 1 , sum = 0;

    cout<< "Enter A Number : ";
    cin>>n;

    while(i<=n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout<<"Sum is : "<<sum<<endl;
}