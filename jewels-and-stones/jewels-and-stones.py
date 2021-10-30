class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        count = 0
        for s in stones:
            count += 1 if s in jewels else 0
        return count
        
