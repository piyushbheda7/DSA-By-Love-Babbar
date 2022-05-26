#include<iostream>
using namespace std ;

string replaceSpaces(string &str)
{
    string temp = "";
    for(int i = 0 ; i < str.length() ; i++)
    {
        if(str[i] == ' ')
        {
            temp.push_back('$');
            temp.push_back('$');
            temp.push_back('$');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return str ;
}

void replace(string &str)
{
    for(int i = str.length() - 1 ; i >= 0 ; i++)
    {
        
    }
}
int main()
{
    string s = "My Name Is Khan";
    cout<<replaceSpaces(s);
}