class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        
        vector<bool> res;
        int initMax=*max_element(candies.begin(),candies.end());
        
        
        for(auto candy:candies)
        {
            if(candy+extraCandies >= initMax)
            {
                res.push_back(true);
            }
            else res.push_back(false);
        }
        
        return res;
    }
};