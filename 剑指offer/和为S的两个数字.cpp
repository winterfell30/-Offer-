class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        if (array.size() <= 1) return {};
        int l = 0, r = array.size() - 1;
        vector<int> ans;
        while (l < r)
        {
            if (array[l] + array[r] == sum)
            {
                ans.push_back(array[l]);
                ans.push_back(array[r]);
                return ans;
                l++, r--;
            }
            else if (array[l] + array[r] < sum)
            	l++;
            else
                r--;
        }
        return ans;
    }
};
