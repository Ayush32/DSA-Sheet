class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int maximum = 0;
	    int count  = 0;
	    int rowIndex = -1;
	    for(int i = 0;i< n;i++)
	    {
	        count  = 0;
	        for(int j = 0;j < m;j++){
	            if(arr[i][j] == 1)
	                count++;
	        }
	        if(count>maximum){
	            maximum = max(count,maximum);
	            rowIndex = i;
	        }
	       
	        
	    }
	    return rowIndex;
	}

};
