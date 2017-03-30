class Solution {
public:
    bool match(char* str, int m, char *pattern, int n)
    {
        if (pattern[n] == '\0')
            return (str[m] == '\0');
        if (pattern[n+1] == '*')
        {
            if (str[m] == pattern[n] || (str[m] != '\0' && pattern[n] == '.'))
                return match(str, m + 1, pattern, n) || match(str, m, pattern, n + 2);
            else
                return match(str, m, pattern, n + 2);
        }
        else if (str[m] == pattern[n] || (str[m] != '\0' && pattern[n] == '.'))
        {
            return match(str, m + 1, pattern, n + 1);
        }
        else
        {
            return false;
        }
    }
    bool match(char* str, char* pattern)
    {
        if (str == nullptr || pattern == nullptr) 
            return false;
        return match(str, 0, pattern, 0);
    }
};
