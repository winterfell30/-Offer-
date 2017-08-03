class Solution {
public:
    int jumpFloor(int number) {
        if (number <= 1) return 1;
        int a = 1, b = 1;
        number--;
        while (number--)
        {
            b = a + b;
            a = b - a;
        }
        return b;
    }
};
