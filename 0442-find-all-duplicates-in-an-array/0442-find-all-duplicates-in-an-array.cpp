class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        
        unordered_map<int,int> ump;
        
        for(auto ele:nums)
        {
            ump[ele]++;
        }
        
        for(auto it:ump)
        {
            if(it.second>1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};