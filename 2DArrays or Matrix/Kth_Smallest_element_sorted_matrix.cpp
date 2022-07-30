// using Priority Queue for k smallest - > use minheap and for largest -> use maxHeap


class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int row = matrix.size();
        int col = matrix[0].size();
        priority_queue<int>minHeap;
  
  for(int i = 0; i <row;i++)
  {
      for(int j = 0;j < col;j++)
      {
          minHeap.push(matrix[i][j]);
      
      if(minHeap.size() > k)
            minHeap.pop();
      }
  }
  return minHeap.top();
    }
};

