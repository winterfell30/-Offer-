class Solution {
public:
    int lengthLongestPath(string input) {
        std::stringstream ss(input);
        std::string s;
        std::map<int, int> hash;
        int mmax = 0;
        while (getline(ss, s))
        {
            int pos = s.find_first_not_of("\t");
            hash[pos] = hash[pos-1] + s.length() - pos;
            if (pos != 0) hash[pos] += 1;
            if (s.find('.') != s.npos) mmax = std::max(hash[pos], mmax);
        }
        return mmax;
    }
};
