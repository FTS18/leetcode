# Last updated: 28/01/2026, 00:31:01
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        l=[]
        s=s.strip()
        l=s.split(" ")
        return len((l[::-1])[0])