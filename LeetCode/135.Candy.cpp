class Solution {
public:
    int candy(vector<int> &ratings) {
        if (ratings.size() <= 1) return ratings.size();
        vector<int> num(ratings.size(), 1);
        for (size_t i = 1; i < ratings.size(); i++)
            if (ratings[i] > ratings[i-1])
                num[i] = num[i-1] + 1;
        for (size_t i = ratings.size() - 1; i > 0; i--)
            if (ratings[i-1] > ratings[i])
                num[i-1] = max(num[i-1], num[i] + 1);
        return accumulate(num.begin(), num.end(), 0);
    }
};
