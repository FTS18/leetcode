# Last updated: 28/01/2026, 00:31:00
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        s = ""
        for d in digits:
            s += str(d)
        num = int(s)
        num += 1
        result = []
        for ch in str(num):
            result.append(int(ch))
        return result
