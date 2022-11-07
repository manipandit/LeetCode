class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        
        unordered_map<int,int> ump;  //value->index
        
        
        for(int i=0;i<n;i++)
        {
            if(ump.find(target-nums[i]) != ump.end())
            {
                ans.push_back(i);
                ans.push_back(ump[target-nums[i]]);
                break;
            }
            
            ump[nums[i]]=i;
        }
        
        return ans;
    }
};