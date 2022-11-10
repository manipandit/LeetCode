class Solution {
public:

    string removeDuplicates(string s) 
    {
        int n=s.length();
        
        int i=0;
        while(i<n)
        {
            int j=i+1;
            
            if(s[i]==s[j])
            {
                s.erase(i,2);
                if(i-1>=0) i=i-1;
            }
            else
            {
                i++;
            }
            
        }
        return s;
    }
};