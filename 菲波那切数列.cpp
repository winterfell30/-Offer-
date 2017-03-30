/*矩阵快速幂可以logn*/
class Solution {
public:
    int Fibonacci(int n) {
        if (n <= 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 1;
        int a = 1, b = 1;
        n -= 2;
        while (n--)
        {
            b = a + b;
            a = b - a;
        }
        return b;
    }
};
