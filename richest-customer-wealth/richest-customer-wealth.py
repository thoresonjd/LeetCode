class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        maxWealth = -inf
        for acc in accounts:
            current = sum(acc)
            if current > maxWealth:
                maxWealth = current
        return maxWealth
