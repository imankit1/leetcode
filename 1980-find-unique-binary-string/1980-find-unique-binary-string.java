class Solution {
        public static String convertToNBitBinaryManual(int decimal, int n) {
 
        StringBuilder binary = new StringBuilder(n); 

 
        for (int i = n - 1; i >= 0; i--) {
        
            int k = decimal >> i;
            
             
            if ((k & 1) > 0) {
                binary.append("1");
            } else {
                binary.append("0");
            }
        }
        return binary.toString();
    }
    public String findDifferentBinaryString(String[] nums) {
        int n=nums.length;
        int[] decimal=new int[n];
        int maxii=nums[0].length();
        for(int i=0;i<nums.length;i++){
        int decimal_number = Integer.parseInt(nums[i], 2);
        decimal[i]=decimal_number;
        }
        for(int i=0;i<=16;i++){
        int decimalNumber=i;
        boolean isFind=false;
        for(int j=0;j<decimal.length;j++){
            if(i==decimal[j]) isFind=true;
        }
        if(isFind==false){
         return convertToNBitBinaryManual(decimalNumber, maxii);
        }
        }
        // System.out.println(maxii);
        return null;
    }
}