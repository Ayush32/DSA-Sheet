Winner of an election
EasyAccuracy: 49.75%Submissions: 27733Points: 2
Given an array of names (consisting of lowercase characters) of candidates in an election. A candidate name in array represents a vote 
casted to the candidate. Print the name of candidate that received Max votes. If there is tie, print lexicographically smaller name.

unordered_map<string,int>mp;
    
    vector<string>v;
    
    for(auto i : s)
    {
        mp[i]++;
    }
    string ans = "";
    int minCandidate = INT_MAX;
    int maxiCandidate = INT_MIN;
    for(auto i : mp){
        if(i.second > maxiCandidate){
        maxiCandidate = i.second;
          ans = i.first;
        }
        
      
      
    }
