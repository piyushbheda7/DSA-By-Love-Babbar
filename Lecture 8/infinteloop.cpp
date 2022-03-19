#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int num =  0;

    while (num<=3)
    {
        switch(num)
        {
            case 1 : cout<<"First"<<endl;
                     break;
            case 2 : cout<<"Second"<<endl;
                     // void exit(1) ;
                    //  continue;
                     break;
            default: cout<<"It is default section"<<endl;
                     break;
        }
        num++ ;
    }
    
}