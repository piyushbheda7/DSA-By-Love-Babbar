#include<iostream>
#include<vector>

using namespace std ;

int main()
{
    vector<int> a ;

    vector<int> v(5,1); // 5 is the size and 1 is initialize all with 1;

    vector<int> copy(a); // vector with value of a 

    a.push_back(0);
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    cout<<a.size()<<endl;

    cout<<a[0]<<endl;
    cout<<a.at(0)<<endl;

    cout<<a.front()<<endl;
    cout<<a.back()<<endl;

    cout<<a.capacity()<<endl;
    
    cout<<"Before pop Last ELement "<<a.back()<<endl;
    a.pop_back();
    cout<<"After Pop Last Element"<<a.back()<<endl;


    a.clear();
    cout<<"Size is "<<a.size()<<endl;
    cout<<"Capacity is "<<a.capacity()<<endl;

    // a.begin(); for finding iterator of vector
}