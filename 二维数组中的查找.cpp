class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if (array.size() == 0) return false;
        int row = array.size();
        int col = array[0].size();
        for (int i = row - 1, j = 0; i >= 0 && j < col; )
        {
            if (array[i][j] == target)
                return true;
            else if (array[i][j] < target)
                j++;
            else
                i--;
        }
        return false;
    }
};
