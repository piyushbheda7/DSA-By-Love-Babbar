// map is in key value pair
// key should be unique 
// key pointing to only one value
// implementation done using red black tree and blanced tree
// this is ordered map 

// in unordered map implementation using hash table 
// complexity of unordered map o(1)

#include<iostream>
#include<map>

using namespace std ;

int main()
{
    map<int,string> m ;

    // insert , erase , find , count complexity is o(log(n))
    m[1] = "piyush";
    m[2] = "Raaj";
    m[3] = "jay";

    m.insert({5 , "Alay"});

    for(auto i:m)
    {
        cout<<i.first<<' '<<i.second<<endl;;
    }
    cout<<endl;

    cout<<"finding 13 as key :"<<m.count(13)<<endl;
    
    m.erase(3);
    for(auto i:m)
    {
        cout<<i.first<<' '<<i.second<<endl;;
    }
    cout<<endl;

}