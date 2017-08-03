class Solution {
public:
    bool VerifySquenceOfBST(vector<int>::iterator l, vector<int>::iterator r) {
        if (l >= r) return true;
        int num = *(r - 1);
        int index = 0;
        while (*(l + index) < num) index++;
        for (int i = index; l + i != r - 1; i++)
            if (*(l + i) < num) return false;
        return VerifySquenceOfBST(l, l + index)
            && VerifySquenceOfBST(l + index, r - 1);
    }
    bool VerifySquenceOfBST(vector<int> sequence) {
        if (sequence.size() == 0)
            return false;
        return VerifySquenceOfBST(sequence.begin(), sequence.end());
    }
};
