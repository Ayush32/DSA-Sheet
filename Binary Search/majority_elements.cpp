Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 1;
        
        
        for(int i = 0; i< nums.size();i++) 
            
        {
            if(nums[i] == nums[candidate])
                count++;
            else
                count--;
            
            if(count  == 0 ){
            candidate = i;
            count = 1;
            
        }
    }
        
        
        // check if the ans is actually a answer and occurs more than n/2;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == nums[candidate])
                count++;
        }
        
        if(count > nums.size()/2);
            return nums[candidate];
        return -1;
    }
};
