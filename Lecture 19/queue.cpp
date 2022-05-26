#include<iostream>
#include<queue>

using namespace std;


int main()
{
    queue<string> q ;

    q.push("Piyush");
    q.push("Hardip");
    q.push("Jay");

    cout<<"Element at first : "<<q.front()<<endl ;
    cout<<"Size  :" <<q.size()<<endl;

    q.pop();
    cout<<"After Pop First ELement from Queue "<<q.front()<<endl;
}