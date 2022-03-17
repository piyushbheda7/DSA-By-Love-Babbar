#include<iostream>
using namespace std;

int main()
{
    int n ; 
     
    cout<<"Enter A Number : ";
    cin>>n;

    int i = 0 ;
    //char ch = 'A' ; 
    while(i<n)
    {
        int j = 0 ;
        char ch = 'A' + i ;
        while(j<=i)
        {
            cout<<ch<<" ";
            j++ ;
        }
        cout<<endl;
        //ch++ ;
        i++ ;
    }
}