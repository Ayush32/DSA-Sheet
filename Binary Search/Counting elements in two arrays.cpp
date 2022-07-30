Given two unsorted arrays arr1[] and arr2[]. They may contain duplicates. For each element in arr1[] count elements less than or equal to it in array arr2[].



class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //Your code goes here
    sort(arr2,arr2 + n);
    
   vector<int>ans;
    for(int i = 0;i<m;i++){
         int low = 0;
    int high = n -1;
    while(low <= high) {
        int mid = low + (high - low)/2;
        int x = arr1[i];
        
        if(arr2[mid] <= x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    ans.push_back(high + 1);
    
    }
    return ans;
    
    }
