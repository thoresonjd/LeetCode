# Justin Thoreson
# Two Sum LeetCode solution

# First attempt (best)
# Faster than 91.52% of Python3 submissions
# Memory less than 65.67% of Python3 submissions
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        tNums = list(nums)
        tNums.sort()
        
        res = [];
        l = 0
        r = len(tNums) - 1

        while l < r:
            sum = tNums[l] + tNums[r]
            if sum < target:
                l += 1
            elif sum > target:
                r -= 1
            elif sum == target:
                index = nums.index(tNums[l])
                res.append(index)
                nums[index] = "Found"         # Account for duplicate entries
                index = nums.index(tNums[r])
                res.append(index)
                return res
        
        return [-1, -1]  
