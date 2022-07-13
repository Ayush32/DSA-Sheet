Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        
        while(start <= end) {
            int mid = start + (end-start)/2;
            
            if(nums[mid] == target)
                return mid;
            if(nums[mid] < target)     // go to left part
                start = mid + 1;
            else                    // go to left part
                end = mid - 1;
        }
        return -1;
    }
};
