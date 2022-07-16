Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
  
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
        
        if(intervals.size()== 0)
            return res;
        sort(intervals.begin(),intervals.end(), [](vector<int> &a,vector<int> &b)
             {
                 return a[0] < b[0];
             });
        
        vector<int>current = intervals[0];
        
        for(int i = 1;i<intervals.size();i++){
            if(current[1] < intervals[i][0]){
                res.push_back(current);
                current = intervals[i];
                }
            else {
                current[1] = max(current[1],intervals[i][1]);
            }
        }
        res.push_back(current);
        return res;
        
    }
};
