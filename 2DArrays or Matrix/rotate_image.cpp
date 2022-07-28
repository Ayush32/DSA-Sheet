// 90 degree clockwise

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rowS = matrix.size();
        int colS = matrix[0].size();
        
        for(int row = 0;row < rowS;row++)
        {
            for(int col = 0;col < row; col++){
                swap(matrix[row][col],matrix[col][row]);
            }
        }
        
        for(int row = 0;row < rowS;row++)
        {
                reverse(matrix[row].begin(),matrix[row].end());
            
        }
    }
};
// rotate by 90 degree anti-clockwise
void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
                int rowS = matrix.size();
        int colS = matrix[0].size();
        for(int row = 0;row < rowS;row++)
        {
                reverse(matrix[row].begin(),matrix[row].end());
            
        }
        for(int row = 0;row < rowS;row++)
        {
            for(int col = 0;col < row; col++){
                swap(matrix[row][col],matrix[col][row]);
            }
        }
        
        
    } 
