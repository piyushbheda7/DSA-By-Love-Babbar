#include<iostream>
using namespace std;

int main()
{
    int n , i = 2 , sum = 0;

    cout<< "Enter A Number : ";
    cin>>n;

    while(i<=n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout<<"Sum Of Even Number is : "<<sum<<endl;
}