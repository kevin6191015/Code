class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans = -1;
        unordered_map<int, int> freq;
        for(auto& n :arr){
            freq[n]++;
        }

        for(auto& [key, val] : freq){
            if(key == val && val > ans){
                ans = key;
            }
        }
        return ans;
    }
};