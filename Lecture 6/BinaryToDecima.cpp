#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n , ans = 0 , i = 0; 

    cout<<"Enter Binary Number : ";
    cin>>n;

    while(n>0)
    {
        int bit = n%10 ;
        ans = (bit * pow(2,i)) + ans ;
        n = n/10 ;
        i++;
    }
    cout<<ans ;
}