//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    private:
    void helper(string s,int ind,string op,vector<string> &ans)
    {
        if(ind>=s.size())
        {
            if(op!="")
            {
                ans.push_back(op);
            }
            return;
        }
        //not pick
        helper(s,ind+1,op,ans);
        
        
        //pick
        op.push_back(s[ind]);
        helper(s,ind+1,op,ans);
    }
	public:
	    
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans;
		    string op="";
		    helper(s,0,op,ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends