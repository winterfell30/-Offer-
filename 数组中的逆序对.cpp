
class Solution {
public:
    const int MOD = 1000000007;
    int sum[200001], n;
    inline int lowbit(int x) { return x & -x; }
    int query(int x)
    {
        int ans = 0;
        while (x > 0)
        {
            ans += sum[x];
            x -= lowbit(x);
        }
        return ans;
    }
    void update(int x)
    {
        for (int i = x; i <= n; i += lowbit(i))
            sum[i]++;
    }
    int InversePairs(vector<int> data) {
        int ans = 0;
        n = data.size();
        vector<int> t(data);
        sort(t.begin(), t.end());
        t.erase(unique(t.begin(), t.end()), t.end());
        for (int i = 0; i < n; i++)
            data[i] = lower_bound(t.begin(), t.end(), data[i]) - t.begin();
        memset(sum, 0, sizeof(sum));
        for (int i = n - 1; i >= 0; i--)
        {
            ans = (ans + query(data[i])) % MOD;
            update(data[i] + 1);
        }
        return ans;
    }
};

