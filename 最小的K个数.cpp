class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> ans;
        if (input.empty() || k > input.size() || !k)
            return ans;
        priority_queue<int, vector<int>, less<int> > q;
        for (int i = 0; i < input.size(); i++)
        {
            if (q.size() < k)
                q.push(input[i]);
            else if (q.top() > input[i])
            {
            	q.pop();
                q.push(input[i]);
            }
        }
        
        while (!q.empty())
        {
            ans.push_back(q.top());
            q.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
