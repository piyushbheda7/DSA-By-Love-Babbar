#include<iostream>

using namespace std ;

void reverse(char name[] , int n)
{
    int s = 0 ; 
    int e = n - 1 ;
    while (s<e)
    {
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[])
{
    int i = 0 ;
    for( ; name[i] != '\0' ; i++);
    return i ;
}

int main()
{
    char name[20];

    cout<<"Enter Your Name "<<endl;
    cin>>name ;

    cout<<"Your Name is ";
    cout<<name<<endl;

    cout<<"Length Of String is : "<<getlength(name)<<endl;

    reverse(name , 6);

    cout<<"Your Name is ";
    cout<<name<<endl;


    name[2] = '\0';
    cout<<"Your Name is "<<endl;
    cout<<name<<endl;


}