#include<iostream>
using namespace std;

int main()
{
    int n , i = 2,flag = 0;

    cout<< "Enter A Number : ";
    cin>>n;

    while(i<n)
    {
        if(n%i==0)
        {
            flag = 1;
            cout<<n<<" is Not Prime "<<endl;
            break;
        }
        i = i + 1;
    }
    if(flag == 0)
    {
        cout<<n<<" is Prime Number "<<endl;
    }
}