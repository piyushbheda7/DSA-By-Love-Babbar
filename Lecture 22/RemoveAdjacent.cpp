#include<iostream>
using namespace std ;

string RemoveAdjacent(string s)
{
    int i = 0 ; 
    int n = s.length();
    for( ; i < n - 1 ; i++)
    {
        if(s[i] == s[i+1])
        {
            s.erase(i , 2);
            i = -1 ;
        }
    }
    return s ;
}

int main()
{
    // string s = "abbaca";
    string s = "azxxzy";
    cout<<RemoveAdjacent(s);
}