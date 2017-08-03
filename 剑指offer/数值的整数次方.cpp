class Solution {
public:
    const double eps = 0.00001;
    double Power(double base, int exponent) {
        if (fabs(base - 0.0) < eps) return 0.0;
        double ans = GetAnswer(base, abs(exponent));
        if (exponent < 0) ans = 1.0 / ans;
        return ans;
    }
    double GetAnswer(double base, int exp)
    {
        double ans = 1;
        double temp = base;
        while (exp)
        {
            if (exp & 1) ans = ans * temp;
            temp = temp * temp;
            exp >>= 1;
        }
        return ans;
    }
};
