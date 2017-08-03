class Solution {
public:
    int vis[110][110];
    int cal(int i, int j)
    {
        int ans = 0;
        while (i || j)
        {
            ans += i % 10;
            ans += j % 10;
            i /= 10;
            j /= 10;
        }
        return ans;
    }
    int dfs(int i, int j, int number, int rows, int cols)
    {
        if (i < 0 || j < 0 || i >= rows || j >= cols || (cal(i, j) > number) || vis[i][j] == 1)
            return 0;
        vis[i][j] = 1;
        return dfs(i + 1, j, number, rows, cols) + dfs(i, j + 1, number, rows, cols)
            + dfs(i, j - 1, number, rows, cols) + dfs(i - 1, j, number, rows, cols) + 1;
    }
    int movingCount(int threshold, int rows, int cols)
    {
        memset(vis, 0, sizeof(vis));
        return dfs(0, 0, threshold, rows, cols);
    }
};
