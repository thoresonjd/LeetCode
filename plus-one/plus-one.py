class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        for i in range(1, len(digits) + 1):
            if digits[-i] < 9:
                digits[-i] += 1
                return digits
            else:
                digits[-i] = 0

            if i >= len(digits):
                return [1] + [i for i in digits]