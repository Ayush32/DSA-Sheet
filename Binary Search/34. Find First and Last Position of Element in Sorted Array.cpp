Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

class Solution {
public:
    int firstOccurence(vector<int>&nums,int target) {
            int s = 0;
            int e = nums.size()-1;
            int ans = -1;
            while(s <= e) {
                int mid = s + (e-s)/2;
                
                if(nums[mid] == target) {
                    ans = mid;
                    e = mid -1;
                }
                if(nums[mid] < target)
                    s = mid + 1;
                if(nums[mid] > target)
                    e = mid - 1;
            }
            return ans;
        }
    int lastOccurence(vector<int>&nums,int target) {
            int s = 0;
            int e = nums.size()-1;
            int ans = -1;
            while(s <= e) {
                int mid = s + (e-s)/2;
                
                if(nums[mid] == target) {
                    ans = mid;
                    s = mid + 1;
                }
                if(nums[mid] < target)
                    s = mid + 1;
                if(nums[mid] > target)
                    e = mid - 1;
            }
            return ans;
        }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurence(nums,target);
        int last = lastOccurence(nums,target);
        
        return {first,last};
        
    }
};
