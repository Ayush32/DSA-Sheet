class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(n1 != n2)
            return false;
        
        for(int i = 0;i<n1;i++){
            if(s[i]  != t[i])
                return false;
        }
        return true;
    }
};

#define num 256
class Solution {
public:
    bool isAnagram(string s, string t) {
        int count1[num] = {0};
        int count2[num] = {0};
        
        int i;
        
        for(int i = 0;s[i] && t[i];i++)
            
        {
            count1[s[i]]++;
            count2[t[i]]++;
        }
        
        if(s[i] || t[i])
            return false;
        
        for(int i = 0;i < num;i++)
            if(count1[i] != count2[i])
                return false;
        return true;
    }
};
