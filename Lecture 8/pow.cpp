#include<iostream>
using namespace std;

int pow(int x , int y);
int main()
{
    int n , m , r = 1; 
    while(r){

        cout<<"Enter the Base Of Number : ";
        cin>>n ;
        cout<<endl ;

        cout<<"Enter the Power Of Number : ";
        cin>>m ;
        cout<<endl ;

        int power = pow(n,m);
        cout<<"Power of "<<n<<"^"<<m<<" is : "<<power<<endl ;
        cout<<endl;
        
        cout<<"If you want to again find power (1/0) : ";
        cin>>r ;
        cout<<endl;
    }
}

int pow(int x , int y)
{
    int power = 1;
    for(int i = 0 ; i < y ; i++)
    {
        power *= x ;
    }
    return power ;
}