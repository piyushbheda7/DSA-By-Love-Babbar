#include<iostream>
using namespace std;

void dummy(int *n);

int main()
{
    int n = 15 ;
    
    dummy(&n);

    cout<<"Number is : "<<n;
}

void dummy(int *n)
{
    (*n)++ ;
    
    cout<<"Number is : "<<*n<<endl;
}