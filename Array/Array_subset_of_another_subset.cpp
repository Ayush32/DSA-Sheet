Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. 
Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted. 
 

Example 1:

Input:
a1[] = {11, 1, 13, 21, 3, 7}
a2[] = {11, 3, 7, 1}
Output:
Yes
Explanation:
a2[] is a subset of a1[]

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_set<int>s;
    
    for(int i = 0;i<n;i++){
        s.insert(a1[i]);
    }
    for(int i = 0;i<m;i++){
        if(s.find(a2[i]) == s.end())
          return "No";
    }
    return "Yes";
}
