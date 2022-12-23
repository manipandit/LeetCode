class Solution {
public:
    void solve(string digits,int ind,vector<string> &mapping,string op,vector<string> &ans)
    {
        if(ind>=digits.size())
        {
            ans.push_back(op);
            return;
        }
        
        int number = digits[ind] - '0';
        string val = mapping[number];
        
        for(int i=0;i<val.size();i++)
        {
            op.push_back(val[i]);
            solve(digits,ind+1,mapping,op,ans);
            op.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
      vector<string> ans;
        string op="";
        if(digits.size()==0)return ans;
        
        vector<string> mapping={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,0,mapping,op,ans);
        
        return ans;
    }
};