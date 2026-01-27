# Last updated: 28/01/2026, 00:31:11
class Solution:
    def removeElement(self, a: list[int], v: int) -> int:
        i = 0
        for x in a:
            if x != v:
                a[i] = x
                i += 1
        return i
