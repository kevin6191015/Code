class Solution {
public:

    vector<vector<int>> dp;
    int maxValue(vector<vector<int>>& events, int k) {
        int n = events.size();
        sort(events.begin(), events.end(), [](auto& a, auto& b){
            return a[0] < b[0];
        });
        dp.assign(n, vector<int>(k + 1, -1));
        return dfs(events, 0, k);
    }
    int dfs(vector<vector<int>>& e, int i, int k){
        if(i == e.size() || k == 0) return 0;
        if(dp[i][k] != -1) return dp[i][k];
        
        int ans = dfs(e, i+1, k);
        
        int thisEnd = e[i][1];
        int j = upper_bound(
            e.begin()+i+1, e.end(),
            thisEnd,
            [](int t, auto &ev){ return t < ev[0]; }
        ) - e.begin();

        ans = max(ans, e[i][2] + dfs(e, j, k-1));

        return dp[i][k] = ans;

    }
};