class Solution {
public:
    bool isNumeric(char* string)
    {
        regex rx("[\\+-]?[0-9]*(\\.[0-9]*)?([eE][\\+-]?[0-9]+)?");
        return regex_match(string, rx);
    }
};
