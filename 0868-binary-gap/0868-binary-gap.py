class Solution:
    def binaryGap(self, n: int) -> int:
        s=""
        while n>0:
            s+=str(n%2)
            n=n//2
       
        l=s.find('1')
        r=l
        cnt=0
        while r<len(s):
            if s[r]=='1':
                cnt=max(cnt, r-l)
                l=r
            r+=1
        return cnt
        

        