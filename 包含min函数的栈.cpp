class Solution {
public:
    void push(int value) {
        if (s.empty())
        {
            s.push(value);
            Min.push(value);
        }
        else
        {
            s.push(value);
            Min.push(value < Min.top() ? value : Min.top());
        }
    }
    void pop() {
        s.pop();
        Min.pop();
    }
    int top() {
        return s.top();
    }
    int min() {
        return Min.top();
    }
public:
    stack<int> s, Min;
};
