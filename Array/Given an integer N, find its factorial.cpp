Given an integer N, find its factorial.
GFG Question
Example 1:

Input: N = 5
Output: 120
Explanation : 5! = 1*2*3*4*5 = 120

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int>ans;
        ans.push_back(1);
        
        for(int x = 2;x<=N;x++){
            int carry = 0;
            for(int i = ans.size()-1;i>=0;i--){
                int value = ans[i] * x + carry;
                ans[i] = value%10;
                carry = value / 10;
            }
            
            while(carry != 0){
                ans.insert(ans.begin(),carry%10);
                carry = carry/10;
            }
        }
        return ans;
    }
};
