class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        if (index <= 0) return 0;
        int m2 = 1, m3 = 1, m5 = 1;
        int c[index+1];
        c[1] = 1;
        for (int i = 2; i <= index; i++)
        {
            c[i] = min(c[m2] * 2, min(c[m3] * 3, c[m5] * 5));
            if (c[i] == c[m2] * 2) m2++;
            if (c[i] == c[m3] * 3) m3++;
            if (c[i] == c[m5] * 5) m5++;
        }
        return c[index];
    }
};
