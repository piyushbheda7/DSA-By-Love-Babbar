#include<iostream>
using namespace std;

int main()
{
    int n , i = 0;
    float c;

    cout<< "Enter A Number : ";
    cin>>n;

    cout<<"Fahrenhit To Celsius Table"<<endl; 
    while(i<=n)
    {
        c = (float)((i-32)*5)/9;
        cout<<i<<"   "<<c<<endl;
        i = i + 1;
    }
}