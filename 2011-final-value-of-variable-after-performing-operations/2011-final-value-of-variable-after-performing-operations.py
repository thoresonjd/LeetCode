class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        return sum('+' in op or -1 for op in operations)