# Last updated: 28/01/2026, 00:30:58
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        c = int("0b" + a, 2) + int("0b" + b, 2)
        return bin(c)[2:]
