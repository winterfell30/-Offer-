class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> ans;
        int row = matrix.size(), col = matrix[0].size();
        if (row == 0 || col == 0) return ans;
        int l = 0, r = matrix[0].size() - 1;
        int u = 0, d = matrix.size() - 1;
        while (l <= r && u <= d)
        {
            for (int i = l; i <= r; i++) ans.push_back(matrix[u][i]);
            for (int i = u + 1; i <= d; i++) ans.push_back(matrix[i][r]);
            if (u != d) 
                for (int i = r - 1; i >= l; i--) ans.push_back(matrix[d][i]);
            if (l != r)
                for (int i = d - 1; i > u; i--) ans.push_back(matrix[i][l]);
            u++, d--, l++, r--;
        }
        return ans;
    }
};
