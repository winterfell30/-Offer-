class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        if (data.size() < 2) return;
        int ans = 0;
        for (int i = 0; i < data.size(); i++)
            ans ^= data[i];
        *num1 = *num2 = 0;
        int id = 0;
        while (!(ans & 1))
        {
            id++;
            ans >>= 1;
        }
        for (int i = 0; i < data.size(); i++)
        {
            if ((data[i] >> id) & 1)
                *num1 ^= data[i];
            else 
                *num2 ^= data[i];
        }
    }
};
