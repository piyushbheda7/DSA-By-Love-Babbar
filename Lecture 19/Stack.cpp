#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> s ;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<"Element at top : "<<s.top()<<endl ;
    s.pop();

    cout<<"Element at top after pop the element"<<s.top()<<endl;

    s.size();
    s.empty();

    
}