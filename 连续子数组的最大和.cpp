class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        if (array.empty()) return 0;
        int sum = 0, Max = -0x3f3f3f3f;
        for (int i = 0; i < array.size(); i++)
        {
            if (sum <= 0) sum = array[i];
            else sum += array[i];
            Max = max(Max, sum);
        }
        return Max;
    }
};
