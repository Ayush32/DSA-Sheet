Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.
Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum = 0;
        int max_sum = INT_MIN;
        
        for(int i = 0;i<nums.size();i++){
            curr_sum = curr_sum + nums[i];
            
            if(max_sum < curr_sum){
                max_sum = max(max_sum,curr_sum);
            }
            
            if(curr_sum < 0)
                curr_sum = 0;
        }
        return max_sum;
    }
};
