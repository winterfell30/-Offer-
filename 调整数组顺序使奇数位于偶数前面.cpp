class Solution {
public:
    void reOrderArray(vector<int> &array) {
        for (int i = 0; i < array.size(); i++)
        {
            if (array[i] & 1)
            {
                int j = i - 1;
                int temp = array[i];
                while (j >= 0 && !(array[j] & 1))
                {
                    array[j + 1] = array[j];
                    j--;
                }
                array[j + 1] = temp;
            }
        }
    }
};
