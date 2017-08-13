class Solution {
public:
    int singleNumber(int A[], int n) {
        int one = 0, two = 0, three = 0;
        for (int i = 0; i < n; i++)
        {
            int t = A[i];
            two |= (one & t);
            one ^= t;
            three = (two & one);
            one &= ~three;
            two &= ~three;
        }
        return one;
    }
};
