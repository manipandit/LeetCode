class Solution {
    string s;
    int dp[101][101];
    
    // Will reducing actually have any impact on length
    int getReducedValue(int cnt, int k) {
        int digsInCnt = (int)log10(cnt) + 1;
        int diff = max(0,cnt - k);
        int digsInDiff = diff ? (int)log10(diff) + 1 : 0;
        if(digsInDiff == digsInCnt) return 0;
        if(!diff) {
            return cnt;
        }
        return cnt - pow(10,digsInDiff) + 1;
    }
    
    // Size of current sequence
    int getSize(int cnt) {
        if(!cnt) return 0;
        if(cnt == 1) return 1;
        return (int)log10(cnt) + 2;
    }
    
    int getOptimalLength(int cur,int k) {
        if(cur >= s.size()) return 0;
        if(dp[cur][k] != -1) return dp[cur][k];
        int idx = cur;
        char ch = s[idx];
        int mnLength = INT_MAX;
        int cnt = 0;
        int cpK = k;
        int cpCur = cur;
        while(idx != s.size()) {
            while(idx != s.size() && ch == s[idx]) idx++;
            cnt += (idx - cur);
            int reduc = getReducedValue(cnt, k);
            mnLength = min(mnLength, getSize(cnt-reduc) + getOptimalLength(idx, k-reduc)); // Remove
            mnLength = min(mnLength, getSize(cnt) + getOptimalLength(idx, k)); // Dont remove
            auto itr = s.find(ch, idx); // Try to get the next index if present
            if(itr == string::npos) break;
            assert(s[itr] == ch); 
            if(itr - idx > k) { // Not able to merge them by deleting
                break;
            } else { // Remove middle characters and then merge
                k -= (itr - idx);
                idx = itr;
                cur = itr;
            }
        }
        dp[cpCur][cpK] = mnLength;
        return mnLength;
        
    }
public:
    int getLengthOfOptimalCompression(string s, int k) {
        this->s = s;
        memset(dp, -1, sizeof(dp));
        return getOptimalLength(0,k);
    }
};