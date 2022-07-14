    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        int start = 0;
    int end = array.size()-1;
    int i = 0;
    
    while(i <= end) {
        if(array[i]  < a){
            swap(array[i],array[start]);
            i++;
            start++;
        }
        else if(array[i] > b)
        {
            swap(array[end],array[i]);
            end--;
        }
        else{
          i++;
        }
    }
    }
