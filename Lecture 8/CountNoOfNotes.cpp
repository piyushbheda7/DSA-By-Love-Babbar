#include<iostream>
using namespace std;

int main()
{
    int n , i = 1; 

    cout<<"Enter The Amount : ";
    cin>>n ;

    cout<<endl;

    while(n>0)
    {
        switch(i)
        {
            case 1: 
                cout<<" 100 : "<<n/100<<endl;
                n -= (n/100)*100 ;
                break;

            case 2:
                cout<<" 50 : "<<n/50<<endl;
                n -= (n/50)*50 ;
                break;

            case 3:
                cout<<" 20 : "<<n/20<<endl;
                n -= (n/20)*20 ;
                break;

            case 4:
                cout<<" 10 : "<<n/10<<endl;
                n -= (n/10)*10 ;
                break;
        }
        i++ ;
    }
}
