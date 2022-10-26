class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int n=candies.size();
        vector<bool> res;
        int initMax=INT_MIN;
        for(int i=0;i<n;i++)
        {
           initMax = max(initMax,candies[i]);
        }
        
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