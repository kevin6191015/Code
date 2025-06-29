class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        using pii = pair<int, int>; // {value, index}
        priority_queue<pii, vector<pii>, greater<pii>> minHeap;

        // 放入 min-heap 中，維護 k 個最大元素（帶索引）
        for (int i = 0; i < nums.size(); ++i) {
            minHeap.push({nums[i], i});
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        // 把 heap 的元素拉出來（可能順序亂了）
        vector<pii> selected;
        while (!minHeap.empty()) {
            selected.push_back(minHeap.top());
            minHeap.pop();
        }

        // 根據 index 排序，保持原本順序
        sort(selected.begin(), selected.end(), [](pii& a, pii& b) {
            return a.second < b.second;
        });

        // 取出值
        vector<int> result;
        for (auto& p : selected) {
            result.push_back(p.first);
        }

        return result;
    }
};
