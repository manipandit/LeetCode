class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> umap;
        
        for(auto str:strs)
        {
            string temp=str;
            sort(str.begin(),str.end());  //sort the string
            umap[str].push_back(temp);    //store the org string under sorted strings as key
        }
        
        for(auto it:umap)
        {
            vector<string> temp=it.second;
            ans.push_back(temp);
        }
        
        return ans;
    }
};