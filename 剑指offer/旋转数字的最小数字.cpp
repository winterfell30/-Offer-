class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if (rotateArray.empty()) return 0;
        int l = -1, r = rotateArray.size() - 1;
        while (l < r - 1)
        {
            int mid = l + (r - l) / 2;
            if (rotateArray[mid] >= rotateArray[0])
                l = mid;
            else
                r = mid;
        }
        return rotateArray[r];
    }
};
