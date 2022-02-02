class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        p = re.compile(r'1+0+1+')
        m = p.search(s)
        return not m
