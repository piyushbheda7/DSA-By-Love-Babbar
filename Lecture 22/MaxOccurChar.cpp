#include<iostream>
using namespace std ;
char MaxOccurChar(string s)
{
    int a[26] = {0};
    for(int i = 0 ; i < s.length() ; i++)
    {
        int num = 0 ;
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            num = s[i] - 'a' ;
            a[num]++ ;
        }
        else
        {
            num = s[i] - 'A' ;
            a[num]++ ;
        }
    }

    int maxi = -1;
    int ans = 0 ;
    for(int i = 0 ; i < 26 ; i++)
    {
        if(maxi < a[i])
        {
            ans = i ;
            maxi = a[i];
        }
    }
    char finalAns = 'a' + ans ;
    return finalAns ;
}

int main()
{
    string s ;

    cin>>s ;
    cout<<MaxOccurChar(s)<<endl;
}