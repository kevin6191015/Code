class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size();
        vector<int> gap(n + 1);
        gap[0] = startTime[0];  
        gap[n] = eventTime - endTime[n - 1];  
        for(int i = 1; i < n; i++){
                gap[i] = startTime[i] - endTime[i - 1];
        }

        if (gap.empty()) return 0;

        int window = 0, ans = 0, window_size = k + 1;
        for(int i = 0; i < window_size && i < gap.size(); i++){
            window += gap[i];
        }
        ans = window;

        for(int i = window_size; i < gap.size(); i++){
                window += gap[i] - gap[i - window_size];
                ans = max(ans, window);
        }

        return ans;
    }
};