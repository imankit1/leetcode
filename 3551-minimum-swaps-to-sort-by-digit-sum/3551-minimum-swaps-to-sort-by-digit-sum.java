class Solution {
    public int sumDigit(int num){
        int sum = 0;
        while(num > 0){
            sum += (num % 10);
            num /= 10;
        }
        return sum;
    }
    public int minSwaps(int[] nums) {
       int n = nums.length;
       int[][] temp = new int[n][2];

        for(int i = 0; i < nums.length; i++){
            int sum = sumDigit(nums[i]);
            temp[i][0] = nums[i];
            temp[i][1] = sum;
            
        }
        // Arrays.sort(temp, (a, b) -> Integer.compare(a[1], b[1]));

        Arrays.sort(temp, (a, b) -> {
    if (a[1] != b[1]) {
        return Integer.compare(a[1], b[1]); // Primary sort (ascending)
    }
    return Integer.compare(a[0], b[0]);     // Secondary sort (ascending)
});

    int[] afterSort= new int[n];
    for(int i = 0;i < n; i++){
        afterSort[i] = temp[i][0];
    }
         
    Map<Integer, Integer>mp = new HashMap<>();
    for(int i = 0; i < n; i++){
        mp.put(nums[i], i);
    }

    int swaps = 0;
    for(int i = 0; i < n; i++){
        int expectedVal = afterSort[i];
        int currVal= nums[i];

        if(expectedVal == currVal) continue;

        int idx = mp.get(expectedVal);

        nums[i] = expectedVal;
        nums[idx] = currVal;
        mp.put(expectedVal, i);
        mp.put(currVal, idx);
        swaps++;
    }
    return swaps;

    }
}