class Solution {
public:
    int cal(int k, int n)   //计算0-n中k的个数
    {
        if (n == 0 && k == 0) return 1;
        int cnt = 0, temp = n;
        for (int i = 1; temp; i *= 10, temp /= 10)
        {
            int high = temp / 10;
            if (k == 0)
            {
                if (high) high--;
                else return (++cnt);
            }
            cnt += high * i;
            int cur = temp % 10;
            if (cur > k) cnt += i;
            else if (cur == k) cnt += n - temp * i + 1;
        }
        return cnt;
    }
    int NumberOf1Between1AndN_Solution(int n)
    {
        return cal(1, n);
    }
};
