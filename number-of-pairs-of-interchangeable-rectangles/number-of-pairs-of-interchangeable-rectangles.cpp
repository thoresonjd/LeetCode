class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long interchangeable = 0;
        map<double, int> ratios;
        for (vector<int> rect : rectangles) {
            double ratio = (double)rect[0] / (double)rect[1];
            interchangeable += ratios[ratio]++;
        }
        return interchangeable;
    }
};