Bianry Search
class Solution {
public:
    
    bool bSearch(vector<int>& v,int start,int end,int target) {
        int mid = start  + (end - start) /2;
        
        if(start > end)
            return false;
        
        if(v[mid] == target)
            return true;
        else if(v[mid] < target)
          return bSearch(v,mid + 1,end ,target);
        else
            return bSearch(v,start,mid - 1,target);
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
       int r=0, c=matrix[0].size()-1;
        
        while(r<matrix.size() && c>=0) {
            if(matrix[r][c]==target) {return true;}            
            if(matrix[r][c]>target) {
                c--;
            }
            else {r++;}
        }
        return false;
       
        
    }
};

TC - O(log(m + n ))

 bool searchMatrix(vector<vector<int>>& matrix, int target) {     
       int r=0, c=matrix[0].size()-1;
        
        while(r<matrix.size() && c>=0) {
            if(matrix[r][c]==target) {return true;}            
            if(matrix[r][c]>target) {
                c--;
            }
            else {r++;}
        }
        return false;
       
        
    }
