# Justin Thoreson
# Plus One LeetCode working attempts
#
# All attempts that appear in the file pass all LeetCode provided tests.
# Each attempt is meant to be an improvement of the previous attempt.
# Best attempt is denoted: (best)

# First attempt
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        for i in range(1, len(digits)+1):
            if digits[-i] == 9:
                digits[-i] = 0;
                if i == len(digits):
                    newDigits = [1]
                    for i in digits:
                        newDigits.append(i)
                    return newDigits
            elif digits[-i] < 9:
                digits[-i] += 1;
                return digits
              
# Second attempt (best)
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        elem = len(digits) - 1
        while digits[elem] == 9:
            digits[elem] = 0
            elem -= 1
        if elem < 0:
            newDigits = [1]
            for num in digits:
                newDigits.append(num)
            return newDigits
        else:
            digits[elem] += 1
            return digits
