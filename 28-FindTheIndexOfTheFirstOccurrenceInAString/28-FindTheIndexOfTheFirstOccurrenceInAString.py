# Last updated: 28/01/2026, 00:31:09
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if needle in haystack:
            return haystack.find(needle)
        else:
            return -1
        