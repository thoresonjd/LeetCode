class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = INT_MIN, l = 0, r = height.size() - 1;
        while (l < r) {
            int h = min(height[l], height[r]);
            water = max(water, (r - l) * h);
            while (height[r] <= h && l < r) r--;
            while (height[l] <= h && l < r) l++;
        }
        return water;
    }
};