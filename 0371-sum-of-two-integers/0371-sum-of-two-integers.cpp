class Solution {
public:
 int subtract(int x, int y)
{
     
    while (y != 0)
    {
        
        int borrow = (~x) & y;

        
        x = x ^ y;

         
        y = borrow << 1;
    }
    return x;
}

    int add(int a, int b){
         string ans ="";
        int carry=0;
       
       
            a=abs(a);
            b=abs(b);
        
        while(a>0 || b>0){
            int x=a%10;
            int y=b%10;
            int sum=(carry+x+y);
            carry=sum/10;
            int mul=sum%10;
            ans+=to_string(mul);
            a/=10;
            b/=10;
        }
       if(carry>0) ans+="1";
        reverse(ans.begin(), ans.end());
        return stoi(ans);
    }
    int getSum(int a, int b) {
       if(a>0 && b>0 ) return add(a, b);
       if(a<0 && b<0) return -1*add(a,b);
       
        return subtract(abs(max(a, b)), abs(min(b,a)));
       
        
    }
};