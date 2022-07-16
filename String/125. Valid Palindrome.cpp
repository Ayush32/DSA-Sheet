A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true

class Solution {
private:
//    check for valid charcater and remove unwanted charcter
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || 
            (ch >= 'A' && ch <= 'Z') || 
            (ch >= '0' && ch <= '9')){
            return 1;
    }
            return 0;
    }
//     convert uppercase into lower if exists
    char tolowerCase(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') )
            return ch;
        
        else{
            char temp =  ch - 'A' + 'a';
            return temp;
        }   
    }
    
    
public:
    
    bool isPalindrome(string s) {
        // int i = 0;
        string temp ="";
        // remove unwanted character
        for(int j = 0;j<s.length();j++) {
            if(valid(s[j]))
                temp.push_back(s[j]);
        }
        for(int j = 0;j<temp.length();j++) {
            temp[j] = tolowerCase(temp[j]);
        }
        // checking for palindrome
        int start = 0;
        int end = temp.length() -1;
        
        while(start <= end) {
            if(temp[start++] != temp[end--])
                return false;
        }
        return true;
       
    }
};
