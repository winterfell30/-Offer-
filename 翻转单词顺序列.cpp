class Solution {
public:
    string ReverseSentence(string str) {
        if (str.length() == 0) return str;
        reverse(str.begin(), str.end());
        int pre = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ')
            {
                reverse(str.begin() + pre, str.begin() + i);
                pre = i + 1;
            }
        }
        reverse(str.begin() + pre, str.end());
        return str;
    }
};
