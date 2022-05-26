#include<iostream>
using namespace std ;

// void substring(string &str ,string &s)
// {
//     int i = 0 ;
//     int lenstr = str.length();
//     int lens = s.length();
//     while(s.length()!=0)
//     {
//         if(str.substr(i,i+lens-2) == s)
//         {
//             str = str.erase(i,lens-1);
//             i = 0 ;
//         }
//         else
//         {
//             i++ ;
//         }
//     }

//     cout<<str;
// }

void substring(string &str , string &s)
{
    while(str.length()!=0 && str.find(s) < str.length())
    {
        str.erase(str.find(s),s.length());
    }
    cout<<str ;
}

int main()
{
    string str = "daabcbaabcbc" ;
    string s = "abc" ;
    // cout<<(str.substr(7,7+s.length()-2) == s);
    substring(str , s);

}