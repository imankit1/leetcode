class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        curr_cnt=1
        prev_cnt=0
        ans=0
        for i in range(0, len(s)-1):
            if s[i]==s[i+1]:
                curr_cnt+=1
            else:
                ans+=min(curr_cnt, prev_cnt)
                prev_cnt=curr_cnt
                curr_cnt=1
        ans+=min(curr_cnt, prev_cnt)
        return ans
        

        