class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int> ans;
        deque<int> q;
        for (int i = 0; i < num.size(); i++)
        {
            while (q.size() && num[q.back()] <= num[i])         //保持队列的单调递减
                q.pop_back();
            while (q.size() && i - q.front() + 1 > size)        //去掉不在队首的下标
                q.pop_front();
            q.push_back(i);
            if (size && i + 1 >= size)
                ans.push_back(num[q.front()]);
        }
        return ans;
    }
};
