class Solution {
public:
    bool checkRecord(string s) {
        
        int neverLate = 0;
        int absent = 0;
        char prev;
        
        for(auto ch:s)
        {
            
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
                if(ch == prev)
                {
                    neverLate ++;
                    if(neverLate + 1 > 2)
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