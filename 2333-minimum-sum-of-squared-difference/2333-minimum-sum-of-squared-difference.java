class Solution {
    public long minSumSquareDiff(int[] nums1, int[] nums2, int k1, int k2) {
        int n = nums1.length;

        int k = k1 + k2;
        int[] hash = new int[100001];
        // PriorityQueue<Integer>pq = new PriorityQueue<>(Collections.reverseOrder());
        for(int i = 0; i < n; i++){
            int diff = Math.abs(nums1[i] - nums2[i]);
            // pq.add(diff);
            hash[diff]++;
        }


        long res = 0;
        for(int i = 100000; i > 0; i--){
            if(hash[i] > 0 && k > 0){
                int newCnt = Math.min(hash[i], k);
                hash[i - 1] = hash[i - 1] + newCnt;
                hash[i] = hash[i] - newCnt;
                k = k - newCnt;
            }
            if(hash[i] > 0){
                res = res + (long)hash[i] * i*i;
            }
        }

        // while(k > 0 && pq.peek() > 0){
        //     int peek = pq.peek();
        //     pq.poll();
        //     peek--;
        //     pq.add(peek);
        //     k--;
        // }

        // long res = 0;
        // while(!pq.isEmpty()){
        //     int top = pq.peek();
        //     res = res + (top*top);
        //     pq.poll();
        // }

        return res;
    }
}