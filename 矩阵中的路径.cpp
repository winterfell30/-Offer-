class Solution {
public:
    bool dfs(int i, int j, int row, int col, char *matrix, char *str, int now, int len)
    {
        int index = i * col + j;
        if (i < 0 || j < 0 || i >= row || j >= col || matrix[index] != str[now])
            return false;
        if (now == len - 1) return true;
        char a = matrix[index];
        matrix[index] = '#';
        if( dfs(i + 1, j, row, col, matrix, str, now + 1, len)
            || dfs(i - 1, j, row, col, matrix, str, now + 1, len)
            || dfs(i, j + 1, row, col, matrix, str, now + 1, len)
            || dfs(i, j - 1, row, col, matrix, str, now + 1, len))
            return true;
        matrix[index] = a;
        return false;
    }
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++) 
                if (dfs(i, j, rows, cols, matrix, str, 0, strlen(str))) 
                    return true;
        return false;
    }


};
