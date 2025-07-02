#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int possibleStringCount(string word, int k) {
        const int MOD = 1'000'000'007;

        // 1️⃣ 分群：統計連續相同字元的長度
        vector<int> groups;
        for (int i = 0; i < word.size(); ) {
            int j = i;
            while (j < word.size() && word[j] == word[i]) ++j;
            groups.push_back(j - i);
            i = j;
        }

        // 2️⃣ 計算總組合數（所有群組長度的乘積）
        long long total = 1;
        for (int g : groups) {
            total = total * g % MOD;
        }

        // 特判：若群組數 ≥ k，最短長度已達，直接回傳 total
        if ((int)groups.size() >= k) return total;

        // 3️⃣ dp[i] = 長度為 i 的原始輸入方式數
        vector<int> dp(k);
        dp[0] = 1;  // base case：長度 0 的方式為 1

        for (int g : groups) {
            vector<int> ndp(k);
            long long window = 0;

            for (int i = 0; i < k; ++i) {
                // 累加進滑動視窗區間右端 dp[i - 1]
                if (i > 0) window = (window + dp[i - 1]) % MOD;

                // 滑動視窗左端超過 g 時要扣除 dp[i - g - 1]
                if (i - g - 1 >= 0) {
                    window = (window - dp[i - g - 1] + MOD) % MOD;
                }

                ndp[i] = window;
            }

            dp.swap(ndp);  // 更新 dp
        }

        // 4️⃣ 統計原始長度 < k 的組合數
        long long invalid = 0;
        for (int i = 0; i < k; ++i) {
            invalid = (invalid + dp[i]) % MOD;
        }

        // 5️⃣ 回傳 total - invalid（注意 MOD 保護）
        return (total - invalid + MOD) % MOD;
    }
};
