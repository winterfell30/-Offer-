class Solution {
public:
    int cal(char op, int last, int pre)
    {
        if (op == '+')
            return last + pre;
        else if (op == '-')
            return pre - last;
        else if (op == '*')
            return pre * last;
        else
            return pre / last;
    }
    int evalRPN(vector<string> &tokens) {
        stack<int> st;
        for (size_t i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
            {
                stringstream ss;
                ss << tokens[i];
                int tmp;
                ss >> tmp;
                st.push(tmp);
            }
            else
            {
                int last = st.top();
                st.pop();
                int pre = st.top();
                st.pop();
                int tmp = cal(tokens[i][0], last, pre);
                st.push(tmp);
            }
        }
        return st.top();
    }
};
