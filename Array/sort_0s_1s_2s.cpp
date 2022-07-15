class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        
        //  2nd Approach
        int count0 = 0, count1 = 0, count2 = 0;
        int i;
        for(i = 0;i<nums.size();i++){
            if(nums[i] == 0)
                count0++;
            if(nums[i] == 1)
                count1++;
            if(nums[i] == 2)
                count2++;
        }
        i = 0;
        while(count0 > 0){
            nums[i++] = 0;
            count0--;
        }
         while(count1 > 0){
            nums[i++] = 1;
            count1--;
        }
         while(count2 > 0){
            nums[i++] = 2;
            count2--;
        }
        
        // dutch national flag algo i.e two pointer approach --> 3rd approach
        
        int start = 0;
        int mid = 0;
        int end = nums.size()-1;
        
        while(mid <= end) {
            if(nums[mid] == 0){
                swap(nums[mid],nums[start]);
                mid++;
                start++;
            }
            
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[end],nums[mid]);
                end--;
            }
                
                
        }
        
    }
};
