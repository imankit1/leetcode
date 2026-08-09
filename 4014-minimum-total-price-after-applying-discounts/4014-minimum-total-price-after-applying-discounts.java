class Solution {
    public double minPrice(int[] prices, int[] discounts) {
        Arrays.sort(prices);
        Arrays.sort(discounts);

        int i = prices.length - 1, j = discounts.length - 1;
        double res = 0;
        while(i >= 0 && j >= 0){
            int p = prices[i];
            int d = discounts[j];
            double discountPercent = (p * (100 - d)) / 100.0;
            res += discountPercent;
            i--;
            j--;
        }


        while(i >= 0){
            res += prices[i];
            i--;
        }

        return res;
    }
}