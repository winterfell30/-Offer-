class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int> > ans;
        if (sum <= 0) return ans;
        int l = 1, r = 2, now = 3;
        while (l < r)
        {
            if (now < sum)
            {
                r++;
                now += r;
            }
            else if (now > sum)
            {
                now -= l;
                l++;
            }
            else
            {
                vector<int> t;
                for (int i = l; i <= r; i++)
                    t.push_back(i);
                ans.push_back(t);
                now -= l;
                l++;
            }
        }
        return ans;
    }
};
