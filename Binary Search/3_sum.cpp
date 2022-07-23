class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
        vector<vector<int>>res;
        
        sort(nums.begin(),nums.end());
        if(nums.size() == 0)
            return res;
        for(int i = 0;i < nums.size();i++){
            int low = i + 1;
            int high = nums.size() - 1;
            
            while(low < high) {
                if(nums[i] + nums[low] + nums[high] == 0){
                    s.insert(vector<int>{nums[i],nums[low],nums[high]});
                    low++;
                    high--;
                }
                
                else if(nums[low] + nums[high] + nums[i]  > 0)
                    high--;
                else
                    low++;
            }
        }
        
        for(auto i  : s) {
            res.push_back(vector<int>{i});
        }
        return res;
    }
};

//  s.insert(vector<int>{nums[i],nums[j],nums[k]});
//                  j++; k--;
//                 }
//                 else if ( sum >-nums[i]) k--;
//                 else if (sum<-nums[i]) j++;
//             }

//         }
        
//     
