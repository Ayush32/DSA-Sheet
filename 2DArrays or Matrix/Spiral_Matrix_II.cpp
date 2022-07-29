class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int row = n;
        int col = n;
        int count = 1;
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;
        vector<vector<int>> ans(n, vector<int> (n));

        while(startingRow <= endingRow && startingCol <= endingCol)
        {
            // print starting row;
            
    for(int index = startingCol; index <= endingCol && startingRow <= endingRow; index++)
        {
            ans[startingRow][index] = count++;
                
            }
            startingRow++;
        
        
        // print  ending column
        
    for(int index = startingRow; index <= endingRow && startingCol <= endingCol; index++)
        {
            ans[index][endingCol] = count++;
        }
        endingCol--;
        
        // print ending Row -- > right to left
    for(int index = endingCol; index >= startingCol && startingRow <= endingRow;index--) 
    {
        ans[endingRow][index] = count++;
    }
        endingRow--;
    for(int index = endingRow; index >= startingRow && startingCol <= endingCol;index--) 
    {
        ans[index][startingCol] = count++;
    }
        startingCol++;
        }
        return ans;
    }
};
