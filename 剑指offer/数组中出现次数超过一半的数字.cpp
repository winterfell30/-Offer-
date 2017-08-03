class Solution {
public:
    bool check(vector<int>& numbers, int num)
    {
        int times = 0;
        for (int i = 0; i < numbers.size(); i++)
            if (numbers[i] == num) times++;
        return (times * 2 > numbers.size());
    }
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        if (numbers.empty()) return 0;
        int ans = numbers[0], times = 1;
        for (int i = 1; i < numbers.size(); i++)
        {
            if (times == 0)
            {
                ans = numbers[i];
                times = 1;
            }
            else if (numbers[i] == ans)
                times++;
            else
                times--;
        }
        if (!check(numbers, ans)) ans = 0;
        return ans;
    }
};
