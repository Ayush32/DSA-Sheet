T.C - O(nlongn)
better solution
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
            for(int i = 0;i<nums.size()-1;i++){
                if(nums[i] == nums[i+1])
                    return true;
            }
    
        
        return false;
    }
};
// optimal solution
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         unordered_map<int,int>mp;
            for(int i = 0;i<nums.size();i++){
                mp[nums[i]]++;
            }
        
        for(auto i : mp)
        {
            if(i.second >= 2)
                return true;
        }
        
        return false;
    }
};
