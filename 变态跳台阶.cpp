class Solution {
public:
    int jumpFloorII(int number) {
        int ans = 1;
        int temp = 2;
        number--;
        while (number)
        {
            if (number & 1) ans = ans * temp;
            temp = temp * temp;
            number >>= 1;
        }
        return ans;
    }
};
