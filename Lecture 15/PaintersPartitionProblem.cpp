bool isPossible(int arr[], int n, int k , int mid)
  {
      int painterCount = 1 ;
      int timeReq = 0 ;
      for(int i = 0 ; i < n ; i++)
      {
          if(timeReq + arr[i] <= mid)
          {
              timeReq += arr[i];
          }
          else
          {
              painterCount++ ;
              if(painterCount > k || arr[i] > mid)
              {
                  return false ;
              }
              timeReq = arr[i] ;
          }
      }
      return true ;
  }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        int start = 0 ;
        int sum = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            sum += arr[i];
        }
        int end = sum ;
        int mid = start + (end - start)/2;
        long long ans ; 
        
        while(start <= end)
        {
            if(isPossible(arr , n , k , mid))
            {
                ans = mid ;
                end = mid - 1 ;
            }
            else
            {
                start = mid + 1 ;
            }
            mid = start + (end - start)/2 ;
        }
        return ans ;
    }