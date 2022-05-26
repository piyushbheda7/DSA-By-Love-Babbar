#include<vector>
using namespace std ;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // vector<int> v(nums) ;
        // int n = nums.size();
        // for(int i = 0 ; i < n ; i++)
        // {
        //     nums[(i+k)%n] = v[i] ;
        // }
        
        vector<int> v(nums.size());
        int n = nums.size();
        for(int i = 0 ; i < n ; i++)
        {
            v[(i+k)%n] = nums[i] ;
        }
        nums = v ;
    }
};