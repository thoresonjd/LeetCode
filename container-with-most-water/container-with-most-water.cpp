class Solution {
public:
    // Calulate area of widest container.
    // Inside containers are less wide,
    // so only compute new area 
    // if height of new wall is 
    // greater than old min height
    int maxArea(vector<int>& height) {
        int water = 0;
        int l = 0, r = height.size() - 1;
        while (l < r) {
            int h = min(height[l], height[r]);
            water = max(water, (r - l) * h);
            while (height[l] <= h && l < r) l++;
            while (height[r] <= h && l < r) r--;
        }
        return water;
    }
};

        
// Below only works if the tallest height is always in the answer
//         pair<int, int> tallest = {INT_MIN, INT_MIN};
//         for (int i = 0; i < height.size(); i++) {
//             if (height[i] > tallest.second) {
//                 tallest.first = i;
//                 tallest.second = height[i];
//             }
//         }
//        
//         int maxArea = 0, area;
//         for (int i = 0; i < height.size(); i++) {
//             area = height[i] * (tallest.first > i ? tallest.first - i : i - tallest.first);
//             if (area > maxArea)
//                 maxArea = area;
//         }
//      
//         return maxArea;