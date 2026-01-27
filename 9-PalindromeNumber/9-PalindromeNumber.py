# Last updated: 28/01/2026, 00:31:16
class Solution:
    def isPalindrome(self, x: int) -> bool:
        s=str(x)
        if s==s[::-1]:
            return True
        else:
            return False