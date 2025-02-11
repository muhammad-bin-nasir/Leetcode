class Solution:
    def climbStairs(self, n: int) -> int:
        l1 = []
        l1.append(1)
        l1.append(1)
        for i in range(2,n+1):
            l1.append(l1[-1]+l1[-2])
        return l1[-1]