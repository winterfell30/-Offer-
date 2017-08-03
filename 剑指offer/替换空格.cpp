class Solution {
public:
	void replaceSpace(char *str,int length) {
        if (length <= 0) return;
        int cnt = 0;
        for (int i = 0; i < length; i++)
            if (str[i] == ' ') cnt++;
        int index = length + cnt * 2 - 1;
        for (int i = length - 1; i >= 0; i--)
        {
            if (str[i] == ' ')
            {
                str[index--] = '0';
                str[index--] = '2';
                str[index--] = '%';
            }
            else
                str[index--] = str[i];
        }
	}
};
