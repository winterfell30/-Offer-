class Solution {
public:
    string PrintMinNumber(vector<int> numbers) {
        if (numbers.empty()) return "";
        vector<string> num;
        for (int i = 0; i < numbers.size(); i++)
        {
            stringstream ss;
            ss << numbers[i];
            num.push_back(ss.str());
        }
        sort(num.begin(), num.end(), [](const string& a, const string& b)
             {
                 string s1 = a + b;
                 string s2 = b + a;
                 return s1 < s2;
             });
        string ans;
        for (int i = 0; i < num.size(); i++)
            ans += num[i];
        return ans;
    }
};
