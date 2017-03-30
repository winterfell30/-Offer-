static int sum;
static int now;
class Cal
{
public:
    Cal() { now++; sum += now;  }
};
class Solution {
public:
    int Sum_Solution(int n) {
        sum = 0;
        now = 0;
        Cal *t = new Cal[n];
        delete[] t;
        return sum;
    }
};
