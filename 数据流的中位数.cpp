class Solution {
public:
    priority_queue<int, vector<int>, less<int> > p;
    priority_queue<int, vector<int>, greater<int> > q;
    void Insert(int num)
    {
        if (p.empty() || num <= p.top()) p.push(num);
        else q.push(num);
        if (p.size() == q.size() + 2) q.push(p.top()), p.pop();
        if (p.size() + 1 == q.size()) p.push(q.top()), q.pop();
    }

    double GetMedian()
    { 
        if (p.size() == q.size())
            return (q.top() + p.top()) / 2.0;
        else
            return p.top();
    }

};
