//那麼從根節點走到第 k 個字元，你經過幾次「右分支」？就被加了幾次 +1
// 而這個過程，恰好對應到 k - 1 的 binary 中有幾個 1！ 

class Solution {
public:
    char kthCharacter(int k) {
        return char('a' + __builtin_popcount(k - 1));
    }
};