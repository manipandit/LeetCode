class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        
        int l=0;
        int h=n-1;
        vector<int> temp;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                temp.push_back(nums[i]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                temp.push_back(nums[i]);
            }
        }
        nums=temp;
        
    }
};