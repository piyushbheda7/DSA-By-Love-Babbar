#include<iostream>
using namespace std ;

int Sqrt(int n)
{
    int ans = 0 ;
    int start = 0 ; 
    int end = n ;
    long long int mid = start + (end - start)/2;

    while(start<=end)
    {
        long long int square = mid * mid ;
        if(square== n)
            return mid ;
        
        if(square < n)
        {
            ans = mid ;
            start = mid + 1 ;
        }    
        else
        {
            end = mid - 1 ;
        }
        mid = start + (end - start)/2;
    }
    return ans ;
}

double PerfectSqrt(int n , int precision , int tempSol)
{
    double factor = 1 ;
    double ans = tempSol ;
    for(int i = 0 ; i < precision ; i++)
    {
        factor = factor/10 ;
        for(double j = ans ; j * j < n ; j =j + factor)
        {
            ans = j ;
        }
    }
    return ans ;
}
int main()
{
    int n ;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int tempSol = Sqrt(n) ;
    cout<<"Square Root is : "<<PerfectSqrt(n , 3 , tempSol);


}