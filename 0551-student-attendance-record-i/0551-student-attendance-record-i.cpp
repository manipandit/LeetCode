class Solution {
public:
    bool checkRecord(string s) {
        
        int neverLate = 0;
        int absent = 0;
        char prev,present;
        
        for(auto ch:s)
        {
            present=ch;
            if(ch=='A')
            {
                absent++;
                if(absent>=2)
                {
                    return false;
                }
            }
            
            else if(ch=='L')
            {
                if(present == prev)
                {
                    neverLate ++;
                    if(neverLate + 1 >=3)
                    {
                        return false;
                    }
                }
                else
                {
                    neverLate = 0;
                }
                
            }
            
            prev=ch;
        }
        
        return true;
    }
};