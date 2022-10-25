class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1="";
        string str2="";
        
        int n=word1.size(),m=word2.size();
        
        for(int i=0; i<(max(n,m)); i++)
        {
            if(i<n)
            {
                str1+=word1[i];
            }
            if(i<m)
            {
                str2+=word2[i];
            }
        }
        
      
        return str1==str2;
    }
};