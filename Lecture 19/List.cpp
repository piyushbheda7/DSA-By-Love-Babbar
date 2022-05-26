// list implementation done using the double linked list
// two pointers one at front and second is at back

#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l ;
    list<int> k(l) ;
    list<int> m(5,100) ; // 5 size and all initialize with 100

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

    l.push_back(20);
    l.push_front(10);

    for(int i : l)
    {
        cout<<i<<" " ;
    }
    cout<<endl;
    l.pop_back();
    l.pop_front();

    for(int i : l)
    {
        cout<<i<<" " ;
    }

    cout<<endl;
    cout<<l.size()<<endl;
    cout<<l.empty()<<endl;
    l.erase(l.begin());

    for(int i : l)
    {
        cout<<i<<" " ;
    }
    cout<<endl;

    l.remove(3);

    for(int i : l)
    {
        cout<<i<<" " ;
    }


}