# Justin Thoreson
# Single Number LeetCode solutions

# First attempt (best)
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        nums.sort()
        elem = 0
        while elem < len(nums) - 1 and nums[elem] == nums[elem+1]:
            elem += 2
        if elem >= len(nums):
            return nums[-1];
        return nums[elem]
