class Solution {
public:
    int rectCover(int number) {
        if (number <= 0) return 0;
        if (number == 1) return 1;
        int small = 1, big = 2;
        number -= 2;
        while (number--)
        {
            big = big + small;
            small = big - small;
        }
        return big;
    }
};
