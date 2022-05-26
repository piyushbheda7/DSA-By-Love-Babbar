#include<iostream>
#include<deque>

using namespace std ;
int main()
{
    deque<int> d ;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    for(int i:d){
    cout<<i<<" ";

    }

    cout<<endl ;

    d.push_back(10);
    d.push_front(20);
    for(int i:d){
    cout<<i<<" ";

    }

    cout<<endl;

    d.pop_back();
    for(int i:d){
    cout<<i<<" ";

    }

    cout<<endl;

    d.pop_front();
    for(int i:d){
    cout<<i<<" ";

    }

    cout<<endl;
    cout<<"Size "<<d.size()<<endl;

    cout<<"Print First Index Element "<<d.at(1)<<endl;

    cout<<"front "<<d.front()<<endl;

    cout<<"backt "<<d.back()<<endl;

    cout<<"is empty "<<d.empty()<<endl;

    d.erase(d.begin() , d.begin()+2) ;
    cout<<"After Erase from begin to begin + 2 the size is :"<<d.size()<<endl;
    
    for(int i:d){
    cout<<i<<" ";

    }


}