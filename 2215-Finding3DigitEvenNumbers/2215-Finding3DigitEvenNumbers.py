# Last updated: 28/01/2026, 00:29:51
class Solution:
    def findEvenNumbers(self, digits):
        res = set()
        n = len(digits)
        
        for i in range(n):
            for j in range(n):
                for k in range(n):
                    if i == j or j == k or i == k:
                        continue
                    a, b, c = digits[i], digits[j], digits[k]
                    if a == 0:
                        continue
                    num = a * 100 + b * 10 + c
                    if num % 2 == 0:
                        res.add(num)
        
        return sorted(res)
