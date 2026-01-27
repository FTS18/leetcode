# Last updated: 28/01/2026, 00:29:38
class Solution:
    def earliestFinishTime(self, a: List[int], b: List[int], c: List[int], d: List[int]) -> int:
        m = float('inf')
        for i in range(len(a)):
            for j in range(len(c)):
                s1 = a[i]
                e1 = s1 + b[i]
                s2 = max(e1, c[j])
                e2 = s2 + d[j]
                m = min(m, e2)
                s3 = c[j]
                e3 = s3 + d[j]
                s4 = max(e3, a[i])
                e4 = s4 + b[i]
                m = min(m, e4)
        return m