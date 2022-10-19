class Solution {
public:
    bool static compare(pair<int,string>p1,pair<int,string>p2)
      {
          if(p1.first==p2.first)return p1.second<p2.second;
          return p1.first>p2.first;
      }
        vector<string> topKFrequent(vector<string>& words, int k) {
          vector<string>ans;
          map<string,int>mp;
          for(auto it:words)
          {
              mp[it]++;
          }
          vector<pair<int,string>>vp;
          for(auto it:mp)
          {
              vp.push_back({it.second,it.first});
          }
          sort(vp.begin(),vp.end(),compare);
          for(int i=0;i<k;i++)
          {
              ans.push_back(vp[i].second);
          }
          return ans;
        }
};