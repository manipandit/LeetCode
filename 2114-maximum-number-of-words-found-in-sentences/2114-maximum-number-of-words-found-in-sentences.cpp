class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCount = 0;
        for(auto str:sentences)
        {
            
            int wordCnt = (int)count(str.begin(),str.end(),' ') + 1 ; //no leading or trailing spaces
            
            maxCount = max(maxCount ,wordCnt);
        }
        return maxCount;
    }
};