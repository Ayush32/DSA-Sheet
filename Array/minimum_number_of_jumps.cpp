Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.

class Solution {
public:
    bool canJump(vector<int>& nums) {
                int n = nums.size();

        if(n <= 1)
            return true;
        
        if(nums[0] == 0)
            return false;
        
        int steps = nums[0];
        int maxReach = nums[0];
        int jumps = 1;
        int i = 1;
        for(i = 1;i<n;i++){
            if(i == n-1)
                return true;
            
            maxReach = max(maxReach,nums[i] + i);
            steps--;
            
            if(steps == 0){
                jumps++;
                
                if(i >= maxReach)
                    return false;
                steps = maxReach - i;
                
            }
            
        }
        return false;
        
    }
};
