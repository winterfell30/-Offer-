class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        int pre = 0, ans = 0;
        int st[300] = {0};
        for (int i = 0; i < len; i++)
        {
            while (pre < len && !st[s[pre]])
                st[s[pre]] = 1, pre++;
            //cout << i << " " << pre << endl;
            ans = max(ans, pre - i);
            st[s[i]] = 0;
        }
        return ans;
    }
};
