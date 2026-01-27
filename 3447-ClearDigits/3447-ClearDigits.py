# Last updated: 28/01/2026, 00:29:36
class Solution:
    def clearDigits(self, s: str) -> str:
        r = []
        for c in s:
            if c.isdigit():
                if r:
                    r.pop()
            else:
                r.append(c)
        return ''.join(r)
