class Solution {
public:
    bool dp[10000];

    bool wordBreak(string s, unordered_set<string> &dict)
    {
        memset(dp, false, sizeof(dp));
        for (int i = 0; i < s.length(); i++)
            if (dict.find(s.substr(0, i + 1)) != dict.end())
                dp[i] = true;
        for (int i = 1; i < s.length(); i++)
            for (int j = i - 1; j >= 0; j--)
                if (dp[j] && dict.find(s.substr(j + 1, i - j)) != dict.end())
                    dp[i] = true;
        return dp[s.length()-1];
    }
};
