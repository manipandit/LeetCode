class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int peri=0;
        for(int i=n-3;i>=0;i--)
        {
            if(nums[i]+nums[i+1]>nums[i+2])
            {
                peri=nums[i]+nums[i+1]+nums[i+2];   
                return peri;
            }
        }
        return peri;
    }
};