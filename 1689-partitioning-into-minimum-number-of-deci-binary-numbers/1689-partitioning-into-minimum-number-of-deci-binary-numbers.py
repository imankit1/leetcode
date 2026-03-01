class Solution:
    def minPartitions(self, n: str) -> int:
        result=0
        for i in n:
            result=max(result, int(i))
        return result

        