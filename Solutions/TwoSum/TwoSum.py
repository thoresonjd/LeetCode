# Justin Thoreson
# Two Sum LeetCode solution

# Latest attempt (best in terms of concise code)
# Runtime: Faster than 83.47% of Python3 online submissions for Two Sum.
# Memory: Less than 42.38% of Python3 online submissions for Two Sum.
# Utilization of a dictionary, similar to the hash map solution in C++
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        d = {};
        for i, k in enumerate(nums):
            if target-k in d:
                return [d[target-k], i]
            else:
                d[k] = i
        
        return [-1, -1]
    
# Original attempt (best in terms of time and space complexity)
# Runtime: Faster than 91.52% of Python3 submissions for Two Sum.
# Memory: Less than 65.67% of Python3 submissions for Two Sum.
# Require duplicate sorted array, 
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
