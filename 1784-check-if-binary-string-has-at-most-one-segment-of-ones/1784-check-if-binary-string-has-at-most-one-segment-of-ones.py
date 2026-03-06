class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        isFind=False
        for i in s:
            if i=='1' and isFind==False:
                continue
            elif i=='0':
                isFind=True
            else:
                return False
        return True
        