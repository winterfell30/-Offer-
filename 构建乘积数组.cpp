class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        int n = A.size();
        vector<int> pre(n), then(n), B(n);
        if (A.empty()) return B	;
        pre[0] = 1;
        then[n-1] = 1;
        for (int i = 1; i < n; i++)
            pre[i] = pre[i-1] * A[i-1];
        for (int i = n - 2; i >= 0; i--)
            then[i] = then[i+1] * A[i+1];
        for (int i = 0; i < n; i++)
            B[i] = pre[i] * then[i];
        return B;
    }
};
