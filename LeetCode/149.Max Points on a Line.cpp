/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
    int maxPoints(vector<Point> &points) {
        sort(points.begin(), points.end(), [](Point a, Point b){return a.x < b.x;});
        long long ans = 0;
        for (int i = 0; i < points.size(); i++)
        {
            map<pair<int, int>, long long> k;
            long long multi = 0, vertical = 0, maxk = 0;
            for (int j = i + 1; j < points.size(); j++)
            {
                if (points[i].x == points[j].x && points[i].y == points[j].y)
                {
                    multi++;
                }
                else if (points[i].x == points[j].x)
                {
                    maxk = max(maxk, ++vertical);
                }
                else
                {
                    int x = points[j].x - points[i].x;
                    int y = points[j].y - points[i].y;
                    int g = __gcd(x, y);
                    x /= g, y /= g;
                    maxk = max(maxk, ++k[make_pair(x, y)]);
                }
            }
            ans = max(ans, maxk + multi + 1);
        }
        return ans;
    }
};
