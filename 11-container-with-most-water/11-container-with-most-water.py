class Solution:
    def maxArea(self, height: List[int]) -> int:
        water = 0
        l = 0
        r = len(height) - 1
        while l < r:
            h = min(height[l], height[r])
            area = h * (r - l)
            water = max(water, area)
            while height[l] <= h and l < r:
                l += 1
            while height[r] <= h and l < r:
                r -= 1
        return water