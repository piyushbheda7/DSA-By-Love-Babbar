class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> v(nums) , temp;
        int n = nums.size() ;
        
        sort(v.begin(),v.end());
        int count = 0 ;
        for(int i = 0 ; i < n  ; i++)
        {
            
            // if(i == n - 1 ){
            //     if(nums[i]>nums[0]) count++ ;
            // }
            // else
            // {
                if(nums[i]>nums[(i+1)% n]) count++ ;
            // }
            
            // temp = v ;
            // rotate(temp.begin() , temp.begin() + i , temp.end());
            // if(temp == nums) return true ;
        }
        if(count <= 1) return true ;
        else return false ;
    }
};