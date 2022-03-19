#include<iostream>
using namespace std;

void update(int a);

int main()
{
    int a = 20  ;
    update(a);
    cout<<a<<endl;
}

void update(int a)
{
    a = a/2 ;
}