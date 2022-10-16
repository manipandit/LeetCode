class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size();
        
        string ans  = "";
        sort(begin(str), end(str));
        string a = str[0];
        string b = str[n-1];
        // cout<<a<<endl;
        // cout<<b<<endl;
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        
        
        
        return ans;
    }
};