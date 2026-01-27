# Last updated: 28/01/2026, 00:30:55
class Solution:
    def sortColors(self, nums: List[int]) -> None:
        p,q,r=nums.count(0),nums.count(1),nums.count(2)
        nums.clear()
        num="0"*p+"1"*q+"2"*r
        for i in num:nums.append(int(i))