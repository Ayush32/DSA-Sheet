Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
                if(nums.size()==0) return ans;

        for(int  i =0;i<nums.size()-2;i++){
            int low = i + 1;
            int high = nums.size()-1;
            
            while(low  < high) {
                if(nums[i] + nums[low] + nums[high] == 0){
                     s.insert(vector<int>{nums[i],nums[low],nums[high]});
                      low++;
                      high--;
                }
                else if(nums[i] + nums[low] + nums[high] > 0)
                    high--;
                else
                    low++;
            }
        }
        for(auto x:s){
             ans.push_back(vector<int>{x});
 }
        return ans;
    }
};

