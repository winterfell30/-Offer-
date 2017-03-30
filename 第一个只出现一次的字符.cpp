class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        if (str.length() == 0) return -1;
        int number[256] = {0};
        for (int i = 0; i < (int)str.length(); i++)
            number[str[i]]++;
        for (int i = 0; i < (int)str.length(); i++)
            if (number[str[i]] == 1) return i;
        return -1;
    }
};
