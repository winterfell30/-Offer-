class Solution {
public:
    set<string> ans;
    void dfs(string& str, int cur)
    {
        if (cur == str.length())
        {
            ans.insert(str);
            return;
        }
        for (size_t i = cur; i < str.length(); i++)
        {
            swap(str[i], str[cur]);
            dfs(str, cur + 1);
            swap(str[i], str[cur]);
        }
        
    }
    vector<string> Permutation(string str) {
        if (str.length() == 0) return {};
        dfs(str, 0);
        vector<string> p;
        for (auto i : ans) p.push_back(i);
        return p;
    }
};
