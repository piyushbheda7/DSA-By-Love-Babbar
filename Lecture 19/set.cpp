// implementing using binary search tree
// one insert and delete no modification
// comes in ordered 

#include<iostream>
#include<set>

using namespace std ;

int main()
{
    set<int> s ;

    // insertion , find , erase , count complexity is O(log(n))
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(10);
    s.insert(20);
    s.insert(30);
    

    for(auto i : s)
    {
        cout<<i<<" " ;
    }
    cout<<endl;

    // cout<<"is 5 in set :";

    s.erase(s.begin());
    for(auto i : s)
    {
        cout<<i<<" " ;
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++ ;
    s.erase(it);
    for(auto i : s)
    {
        cout<<i<<" " ;
    }
    cout<<endl;


    cout<<"5 is present or not"<<s.count(5)<<endl;

    set<int>::iterator itr = s.find(10);
    cout<<"value Present at itr"<<*itr<<endl;

    for(auto it = itr ; it!=s.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}