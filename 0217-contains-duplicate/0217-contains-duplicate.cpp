
class Solution {
public:

    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> ump;
        
        for(auto num:nums)
        {
            ump[num]++;
            if(ump[num]>1)return true;
        }
        
        return false;
        
    }
};