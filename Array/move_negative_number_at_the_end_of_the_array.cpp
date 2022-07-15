Move all negative elements to end 

class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
    int start = 0;
    int end = n-1;
    
    while(start <= end){
        
        if(arr[start] > 0){
         start++;
        }
        else if(arr[end] < 0){
        end--;
        
        }
        else{
        swap(arr[start],arr[end]);
        }
    }
    }
};
