class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        const int mod = 1e9 + 7;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> two_power (n + 1, 1);
        for(int i = 1; i <= n; i++){
            two_power[i] = (two_power[i - 1] * 2) % mod;
        }
        int l = 0, r = n - 1, ans = 0;
        while(l <= r){
            if(nums[l] + nums[r] <= target){
                ans = (ans + two_power[r - l]) % mod;
                l++;
            }else{
                r--;
            }
        }

        return ans; 
    }
};