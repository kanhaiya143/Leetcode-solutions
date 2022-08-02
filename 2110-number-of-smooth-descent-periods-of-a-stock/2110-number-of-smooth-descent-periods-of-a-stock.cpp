class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
         long long ans = 0, N = prices.size();
        for (long long i = 0; i < N; ) {
            long long len = 1;
            ++i;
            while (i < N && prices[i] == prices[i - 1] - 1) ++i, ++len;
            ans += (1 + len) * len / 2;
        }
        return ans;
    }
};