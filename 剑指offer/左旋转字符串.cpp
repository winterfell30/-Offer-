class Solution {
public:
    string LeftRotateString(string str, int n) {
        if (str.length() == 0) return str;
        n %= str.length();
        reverse(str.begin(), str.begin() + n);
        reverse(str.begin() + n, str.end());
        reverse(str.begin(), str.end());
        return str;
    }
};
