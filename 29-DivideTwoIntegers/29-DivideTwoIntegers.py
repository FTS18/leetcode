# Last updated: 28/01/2026, 00:31:08
class Solution:
    def divide(self, d: int, v: int) -> int:
        if d == -2147483648 and v == -1:
            return 2147483647
        return int(d / v)
