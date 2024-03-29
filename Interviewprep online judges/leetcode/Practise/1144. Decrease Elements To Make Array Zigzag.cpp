    int movesToMakeZigzag(vector<int>& A) {
        int res[2] = {0, 0},  n = A.size(), left, right;
        for (int i = 0; i < n; ++i) {
            left = i > 0 ? A[i - 1] : 1001;
            right = i + 1 < n ? A[i + 1] : 1001;
            res[i % 2] += max(0, A[i] - min(left, right) + 1);
        }
        return min(res[0], res[1]);
    }