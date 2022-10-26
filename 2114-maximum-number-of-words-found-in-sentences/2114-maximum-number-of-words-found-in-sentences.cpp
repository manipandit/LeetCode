class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCount = 0;
        for(auto str:sentences)
        {
            int wordCnt=1;
            for(int i=0;i<str.size();i++)
            {
                if(str[i]==' ')wordCnt++;
            }
            
            maxCount = max(maxCount ,wordCnt);
        }
        return maxCount;
    }
};