class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        if (numbers.size() != 5) return false;
        sort(numbers.begin(), numbers.end());
        int numOfZero = 0, numOfGap = 0;
        int i;
        for (i = 0; i < numbers.size() && numbers[i] == 0; i++)
            numOfZero++;
        if (numOfZero >= 4) return true;
        int small = numbers[i];
        for (i += 1; i < numbers.size(); i++)
        {
            if (numbers[i] == small) return false;
            numOfGap += numbers[i] - small - 1;
            if (numOfGap > numOfZero) return false;
            small = numbers[i];
        }
        return true;
    }
};
