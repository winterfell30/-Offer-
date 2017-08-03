class Solution {
public:
    int Add(int num1, int num2)
    {
        int t, sum;
        while (num2)
        {
            sum = num1 ^ num2;
            t = (num1 & num2) << 1;
            num1 = sum;
            num2 = t;
        }
        return num1;
    }
};
