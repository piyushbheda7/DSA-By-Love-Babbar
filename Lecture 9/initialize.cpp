#include<iostream>
using namespace std;

int main()
{
    int array[1000] = {0} ; // initalized as all 0's
    int b[1000];
    // for(int i = 0 ; i < 10 ; i++)
    // {
    //     cout<<b[i]<<" "<<endl;
    // }
    for(int i = 0 ; i < 1000 ; i++)
    {
        array[i] = 1 ;
    }
    cout<<"array[500] : "<<array[500]<<endl;
    cout<<"b[500] : "<<b[500];
}