class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        return "01" not in s
        
        # p = re.compile(r'1+0+1+') # Pattern
        # m = p.search(s)           # Match
        # return not m