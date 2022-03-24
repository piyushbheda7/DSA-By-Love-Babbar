class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int s = 0 ; 
        int e = arr.length - 1; 
        
        int mid = s + (e-s)/2;
        
        while(s<e)
        {
            if(arr[mid] < arr[mid+1])
            {
                s = mid + 1 ;
            }
            else
            {
                e = mid ;
            }
            mid = s + (e-s)/2;
        }
        return s;
        
        
        
        
        
        
        
        
//        int index = 1 ;
//         for(int i = 0 ; i < arr.length ; i++)
//         {
//             if(arr[i+1] > arr[i]) continue ;
//             else
//             {
//                 index = i;
//                 break;
//             }
        
//         }
//         return index ;
    }
}