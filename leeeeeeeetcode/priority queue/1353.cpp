class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        priority_queue<int, vector<int>, greater<int>> min_heap;
        int index = 0, day = 1, n = events.size(), ans = 0;
        while(index < n || !min_heap.empty()){
            if(min_heap.empty()){
                day = events[index][0];
            }
            while(index < n && events[index][0] <= day){
                min_heap.push(events[index][1]);
                index++;
            }
            min_heap.pop();
            ans++;
            day++;
            while(!min_heap.empty() && min_heap.top() < day){
                min_heap.pop();
            }
            
        }
        return ans;
    }
};