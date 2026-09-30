class Solution:
    def twoSum(self, nums: List[int], k: int) -> List[int]:
        m = {}
        a = list()    
        for i,x in enumerate(nums):
            diff = k-x
            if diff in m:
                return [m[diff],i]
            m[x] = i
        return a
        