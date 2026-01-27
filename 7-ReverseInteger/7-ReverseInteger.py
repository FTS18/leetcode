# Last updated: 28/01/2026, 00:31:18
class Solution:
    def reverse(self, x: int) -> int:
        n = x < 0
        x = abs(x)
        r = int(str(x)[::-1])
        if n:
            r = -r
        m = 1 << 31  
        return r if -m <= r < m else 0
