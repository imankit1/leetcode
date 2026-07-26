class Solution {
    public List<List<Integer>> aggregateTimeSeries(int[][] series1, int[][] series2) {
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        int i = 0;
        int j = 0;
        int n = series1.length;
        int m = series2.length;

        while( i < n && j < m){
            if(series1[i][0] <= series2[j][0]){
                int u = series1[i][0];
                int v = series1[i][1] + series2[j][1];
                res.add(Arrays.asList(u, v)); 
                if(series1[i][0] == series2[j][0]) j++;
                i++;
            }
            else {
                int u = series2[j][0];
                int v = series1[i][1] + series2[j][1];
                res.add(Arrays.asList(u, v)); 
                j++;
            }
        }

        while(i < n){
                int u = series1[i][0];
                int v = series1[i][1];
                res.add(Arrays.asList(u, v)); 
                i++;
        }

        while(j < m){
                int u = series2[j][0];
                int v = series2[j][1];
                res.add(Arrays.asList(u, v)); 
                j++;
        }
        return res;

    }
}