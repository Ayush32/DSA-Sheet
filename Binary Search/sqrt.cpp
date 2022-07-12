class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        long long int  ans = 0;
        while(low <= high) {
           long long int mid = (high + low)/2;
            long long int power = mid * mid;
            
            if(power == x){
                return mid;
            }
            else if(power > x){
                high = mid - 1;
            }
            else {
                ans = mid;
                low = mid + 1;
            }
            
        }
        return ans;
    }
};
