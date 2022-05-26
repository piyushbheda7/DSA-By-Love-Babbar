// first element will always greatest
// Priority queue implement on maxheap 
// heap is relate to priority queue

#include<iostream>
#include<queue>

using namespace std ;

int main()
{
    // Max - heap
    priority_queue<int> maxi ;

    // Min - heap
    priority_queue<int , vector<int> , greater<int>> mini ;

    maxi.push(1);
    maxi.push(2);
    maxi.push(4);
    maxi.push(0);

    cout<<"Size->"<<maxi.size()<<endl ;

    int n = maxi.size();
    for(int i = 0 ; i < n ; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(10);
    mini.push(5);
    mini.push(0);
    mini.push(20);
    mini.push(3);
    mini.push(2);

    n = mini.size();
    for(int i = 0 ; i < n ; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<mini.empty()<<endl;
}