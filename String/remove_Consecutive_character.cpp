string removeConsecutiveCharacter(string S)
    {
        // code here.
        int i = 0;
        int n = S.length();
        
        while(i < n) {
            if(S[i] == S[i + 1]){
                S.erase(i,1);
                if(i > 0){
                    i--;
                }
                n = n -2;
            }
            else{
                i++;
            }
            
        }
        return S;
    }
