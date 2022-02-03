class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0, l = 0, r = height.size() - 1;
        while (l < r) {
            int h = min(height[l], height[r]);
            int area = h * (r - l);
            water = max(water, area);
            while (height[l] <= h && l < r) l++;
            while (height[r] <= h && l < r) r--;
        }
        return water;
    }
};