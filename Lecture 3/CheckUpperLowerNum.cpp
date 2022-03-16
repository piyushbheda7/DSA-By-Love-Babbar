#include<iostream>
using namespace std;

int main()
{
    char ch ; 

    cout<<"Enter A Character : ";
    cin>>ch;

    if(ch>='a' && ch<='z')
    {
        cout<<" Character is in LowerCase.....";
    }
    else if(ch>='A' && ch<='Z')
    {
        cout<<" Character is in UpperCase....";
    }
    else if(ch>=47 && ch<=57)
    {
        cout<<" Character is in Numeric.......";
    }
}