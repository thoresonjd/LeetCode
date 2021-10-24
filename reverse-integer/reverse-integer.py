class Solution:
    def reverse(self, x: int) -> int:
        """ 
        1) Convert absolute value of x to a string
        2) Reverse the string via slicing
        3) Convert reversed string back to integer
        4) Return 0 if out of bounds, else determine sign and return result
        """
        res = int(str(abs(x)) [::-1])            
        if res >= (2**31) - 1 or res <= -(2**31):
            return 0
        return res if x > 0 else -res