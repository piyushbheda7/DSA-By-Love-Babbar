#include<iostream>

using namespace std ;

char toLowerCase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a' ;
    }
    else
    {
        return ch ;
    }
}

bool CheckChar(char s)
{
    if(s >= 'a' && s <= 'z')
    {
        return true ;
    }
    else if(s >= 'A' && s <= 'Z')
    {
        return true ;
    }
    else if(s >= 47 && s <= 57)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

bool checkPalindrome(string s)
{
    if(s.length() == 1)
    {
        if(!CheckChar(s[0])) return true ;
    }
    int i = 0 ;  
    int j = s.length()-1;
    cout<<j<<endl;
//     s = s.toLoweCase();
    while(i<=j)
    {
        cout<<CheckChar(s[i])<<" "<<CheckChar(s[j])<<" ";
        while(!CheckChar(s[i]) || !CheckChar(s[j]))
        {
            if(!CheckChar(s[i]))
            {
                i++ ;
            }
            if(!CheckChar(s[j]))
            {
                j-- ;
            }
        }
        // cout<<s[i]<<s[j]<<endl;
        if(toLowerCase(s[i]) != toLowerCase(s[j]))
        {
            return false ;
        }
        
        if(toLowerCase(s[i]) == toLowerCase(s[j]))
        {
            i++ ;
            j-- ;
        }
    }
    return true ;
}

main()
{
    string s = "Noo & @ OOn"  ;

    

    // for(int i = 0 ; i < s.length(); i++)
    // {
    //     cout<<toLowerCase(s[i])<<" ";
    // }
    // cout<<endl;
    // for(int i = 0 ; i < s.length(); i++)
    // {
    //     cout<<CheckChar(s[i])<<" ";
    // }
    
    // for(int i = 0 , j = s.length() - 1 ; i <=  j ; i++ , j--)
    // {
    //     while(!CheckChar(s[i]) && !CheckChar(s[j]))
    //         {
    //             cout<<s[i]<<" "<<s[j];
    //             i++ ;
    //             j-- ;
    //         }
    // }
    cout<<"is String is Palindrom "<<checkPalindrome(s);
}