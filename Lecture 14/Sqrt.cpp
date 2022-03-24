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