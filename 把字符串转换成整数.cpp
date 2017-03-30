class Solution {
public:
    int StrToInt(string str) {
        if (str.length() == 0) return 0;
        int sign = 1;
        if (str[0] == '-')
            sign = -1;
        int res = 0;
        for (int i = (str[0] == '+' || str[0] == '-'); i < str.length(); i++)
        {
            if (str[i] < '0' || str[i] > '9')
                return 0;
            res = (res << 1) + (res << 3) + (str[i] - '0');
        }
        return sign * res;
    }
};
