class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }

        int ans = 0;

        for(auto& [key, val] : map){
            if(map.count(key + 1)){
                ans = max( ans, map[key] + map[key + 1]);
            }
        }
        return ans;
    }
};