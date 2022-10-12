class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            int eleIndex = abs(nums[i])-1;
            
            //edit the element
            nums[eleIndex]=-nums[eleIndex];
            
            if(nums[eleIndex]>0)
            {
                ans.push_back(eleIndex+1);
            }
            
        }
        return ans;
    }
};