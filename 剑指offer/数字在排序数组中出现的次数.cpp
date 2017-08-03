class Solution {
public:
    int upper_search(vector<int>& data, int k)
    {
        int l = -1, r = data.size(); //(]
        while (l < r - 1)
        {
            int mid = l + (r - l) / 2;
            if (data[mid] <= k) l = mid;
            else r = mid;
        }
        return r;
    }
    int lower_search(vector<int>& data, int k)
    {
        int l = -1, r = data.size(); //[)
        while (l < r - 1)
        {
            int mid = l + (r - l) / 2;
            if (data[mid] < k) l = mid;
            else r = mid;
        }
        return l + 1;
    }
    int GetNumberOfK(vector<int> data ,int k) {
        if (data.empty()) return 0;
        return upper_search(data, k) - lower_search(data, k);
    }
};
