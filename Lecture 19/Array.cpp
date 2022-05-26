#include<iostream>
#include<array>

using namespace std ;

int main()
{
    int basic[3] = { 1 , 2 , 4};

    array<int , 4> a = { 1 , 2 , 3 , 4};

    cout<<a.size()<<endl;

    cout<<a[0]<<endl;
    cout<<a.at(0)<<endl;

    cout<<a.front()<<endl;
    cout<<a.back()<<endl;

    cout<<a.empty()<<endl;

}