// algos
// binary search
// lower bound
// upper boutd
// max 
// min
// swap
// reverse
// rotate 
// sort

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ;

int main()
{
    vector<int> v ;

    v.push_back(1);
    v.push_back(5);
    v.push_back(9);
    v.push_back(16);
    v.push_back(20);

    cout<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"Lower Bound is :  "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    cout<<"Upper Bound is :  "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;

    int a = 3 ; 
    int b = 5 ;

    cout<<"max : "<<max(a , b)<<endl;

    cout<<"min : "<<min(a ,b )<<endl;

    swap(a , b);
    cout<<"a : "<<a<<" b : "<<b<<endl ;

    string abcd = "abcd" ;
    reverse(abcd.begin(),abcd.end());
    cout<<"String is : "<<abcd<<endl;

    rotate(v.begin(),v.begin()+3,v.end());
    // first 3 element goes to last
    cout<<"After Rotate : ";
    for(int i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> v1 ;

    v1.push_back(19);
    v1.push_back(9);
    v1.push_back(25);
    v1.push_back(30);
    v1.push_back(5);

    cout<<"Before Sort : ";
    for(int i : v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v1.begin() , v1.end()); // intor sort 
    cout<<"After Sort : ";
    for(int i : v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}