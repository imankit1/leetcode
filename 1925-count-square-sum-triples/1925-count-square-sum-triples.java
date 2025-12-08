class Solution {
    public int countTriples(int n) {
         int[] arr=new int[n+1];
         for(int i=1;i<=n;i++){
            arr[i]=i*i;
         }

          Set<Integer>st= new HashSet<>();

          for(int i=1;i<arr.length;i++) st.add(arr[i]);

          int cnt=0;

         for(int i=1;i<arr.length;i++){
            int a=arr[i];
            for(int j=i+1;j<arr.length;j++){
                int b=arr[j];
                int sum=a+b;

                if(st.contains(sum)) cnt++;
            }
         }

         return cnt*2;
    }
}