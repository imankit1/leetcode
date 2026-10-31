class Solution {
    public void buildSegmentTree(int i, int l , int r, int[] segmentTree, int[] heights){
        if(l == r){
            segmentTree[i] = l;
            return;
        }
        int mid = l + (r - l)/ 2;
        buildSegmentTree(2 * i + 1, l, mid, segmentTree, heights);
        buildSegmentTree(2 * i + 2, mid + 1, r,  segmentTree, heights);

        int leftIdx = segmentTree[2 * i + 1];
        int rightIdx = segmentTree[2 * i + 2];

        if(heights[leftIdx] >= heights[rightIdx]){
            segmentTree[i] = leftIdx;
        }else segmentTree[i] = rightIdx;
    }
    int RMIQ(int[] segmentTree, int[] heights, int n, int start, int end){
        return querySegmentTree(start, end, 0, 0, n - 1, segmentTree, heights);
    }
    int querySegmentTree(int start, int end, int i, int l, int r, int[] segmentTree, int[] heights){
        if(l > end || r < start) return -1;
        if(l >= start && r <= end) return segmentTree[i];

        int mid = l + (r - l)/2;

        int leftMaxIdx = querySegmentTree(start, end, 2 * i + 1, l, mid, segmentTree, heights);
        int rightMaxIdx = querySegmentTree(start, end, 2 * i + 2, mid + 1, r, segmentTree, heights);

        if(leftMaxIdx == -1) return rightMaxIdx;
        if(rightMaxIdx == -1) return leftMaxIdx;

        if(heights[leftMaxIdx] >= heights[rightMaxIdx]) return leftMaxIdx;
        return rightMaxIdx;
    }
    public int[] leftmostBuildingQueries(int[] heights, int[][] queries) {
        int n = heights.length;
        int[] segmentTree = new int[4 * n];
        buildSegmentTree(0, 0, n - 1, segmentTree, heights);

        int m = queries.length;
        int[] ans = new int[m];
        for(int i = 0; i < m; i++){
            int min_idx = Math.min(queries[i][0], queries[i][1]);
            int max_idx = Math.max(queries[i][0], queries[i][1]);

            if(min_idx == max_idx){
            ans[i] = min_idx;
            continue;
            } 
            else if(heights[max_idx] > heights[min_idx]){
            ans[i] = max_idx;
            continue;
            } 

            int l = max_idx + 1;
            int r = n - 1;
            int result_idx = Integer.MAX_VALUE;
            while(l <= r){
                int mid = l + (r - l)/ 2;

                int idx = RMIQ(segmentTree, heights, n, l, mid);

                if(heights[idx] > Math.max(heights[min_idx], heights[max_idx])){
                    result_idx = Math.min(result_idx, idx);
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
            if(result_idx == Integer.MAX_VALUE) ans[i] = -1;
            else ans[i] = result_idx; 
        }
        return ans;
    }
}