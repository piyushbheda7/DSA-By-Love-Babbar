#include<iostream>
using namespace std;

int setBit(int a , int b);

int main()
{
    int a , b ;
    cout<<"Enter The Value Of A : ";
    cin>>a;

    cout<<"Enter The Value Of B : ";
    cin>>b;

    cout<<"Total No Of 1 Bit in "<<a<<" and "<<b<<" is : "<<setBit(a,b);
}

int setBit(int a , int b)
{
    int count = 0 ;
    while(a != 0 || b != 0)
    {
        if(a&1) count++ ;
        if(b&1) count++ ;
        a = a >> 1 ;
        b = b >> 1 ;
    }
    return count ;
}