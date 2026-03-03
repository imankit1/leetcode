class Solution:
    def minDistinctFreqPair(self, nums: list[int]) -> list[int]:
        nums.sort()
        n=len(nums)
        if n==1:
            return [-1,-1]
        prev=nums[0]
        cnt_current=0
        for i in range(0, n):
            if nums[i]!=prev and nums.count(prev)!=nums.count(nums[i]):
                return [prev, nums[i]]
        return [-1,-1]



