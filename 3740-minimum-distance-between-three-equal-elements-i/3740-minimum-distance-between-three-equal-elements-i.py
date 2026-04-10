class Solution:
    def minimumDistance(self, nums: List[int]) -> int:
        n=len(nums)
        res=100
        for i in range(0, n):
            for j in range(i+1, n):
                if nums[i]==nums[j]:
                    for k in range(j+1, n):
                        if nums[j]==nums[k]:
                            res=min(res, abs(i-j)+abs(j-k)+abs(k-i))
        if res==100:
            return -1
        return res



        