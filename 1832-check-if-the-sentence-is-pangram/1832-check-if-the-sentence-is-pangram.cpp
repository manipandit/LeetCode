class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.size();
        
        if(n<26)return false;
        
        vector<int> check(26,0);
        
        for(auto ch:sentence)
        {
            check[ch-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(check[i]==0)return false;
        }
        
        return true;
    }
};