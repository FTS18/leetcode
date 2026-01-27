# Last updated: 28/01/2026, 00:29:35
class Solution:
    def triangleType(self, nums: List[int]) -> str:
        if (nums[0]+nums[1]>nums[2]) and (nums[1]+nums[2]>nums[0]) and (nums[2]+nums[0]>nums[1]):
            if (nums[0]==nums[1]) or (nums[0]==nums[2]) or (nums[1]==nums[2]):
                if (nums[0]==nums[1]==nums[2]):
                    return "equilateral"
                else:
                    return "isosceles"
            else:
                return "scalene"
        else:
            return "none"