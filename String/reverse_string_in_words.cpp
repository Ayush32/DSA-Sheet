class Solution {
public:
    string reverseWords(string s) {
        vector<string>ans;
        string str = "";
        for(int i = 0;i<s.length();i++) {
            if(s[i] == ' ')
            {
              if(str.length() ==0) continue;
                ans.push_back(str);
                
                str = "";
            }
            else{
                str += s[i];
            }
        }
        if(str.length()) ans.push_back(str);
        
        reverse(ans.begin(),ans.end());
        string a = "";
        for(int  i = 0 ;i < ans.size();i++){
            if(ans.size() -1 == i)
                a += ans[i];
            else
                a += ans[i] + " ";
        }
    
    
        return a;
    }
};
