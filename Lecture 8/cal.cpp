#include<iostream>
using namespace std;

int main()
{
    int a , b ;
    char exp ;

    cout<<"Enter A , B and Expression : ";
    cin>>a>>b>>exp ;

    cout<<endl;
    switch (exp)
    {
    case '+' :
        cout<<"A "<<exp<<" B = "<<a+b<<endl;
        break;

    case '-' :
        cout<<"A "<<exp<<" B = "<<a-b<<endl;
        break;
    
    case '*' :
        cout<<"A "<<exp<<" B = "<<a*b<<endl;
        break;
    
    case '/' :
        cout<<"A "<<exp<<" B = "<<a/b<<endl;
        break;

    case '%' :
        cout<<"A "<<exp<<" B = "<<a%b<<endl;
        break;

    default:
        break;
    }
}