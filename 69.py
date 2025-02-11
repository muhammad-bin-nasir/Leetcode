class Solution:
    def mySqrt(self, x: int) -> int:
        sqr = 0
        for i in range(x+1):
            if i*i <= x:
                sqr = i
            else:
                break
        return sqr