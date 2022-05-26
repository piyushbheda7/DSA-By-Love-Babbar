#include<iostream>
#include<vector>

using namespace std ;

void moveZeroes(vector<int>& nums) {
        int i = 0 , j = 1;
        while(j < nums.size())
        {
            if(nums[j] == 0)
            {
                j++ ;
            }
            
            if(nums[i] == 0 && nums[j] != 0)
            {
                swap(nums[i] , nums[j]);
                i++ ;
                j++ ;
            }
        }

        for(int i = 0 ; i < nums.size() ; i++)
        {
            cout<<nums[i]<<' ';
        }
}

void MoveZero(vector<int>& nums) {
        int i = 0 , j = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] != 0)
            {
                swap(nums[i] , nums[j]);
                j++ ;
            }
        }
}

int main()
{
    vector<int> v ;

    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(15);
    v.push_back(12);

    moveZeroes(v);
}