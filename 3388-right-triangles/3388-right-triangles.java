class Solution {
    public long numberOfRightTriangles(int[][] grid) {
        int row=grid.length;
        int col=grid[0].length;

        int[] rowOnes=new int[row];
        for(int i=0;i<row;i++){
            int ones=0;
            for(int j=0;j<col;j++){
                if(grid[i][j]==1) ones++;
            }
            rowOnes[i]=ones;
        }

        int [] colOnes=new int[col];

        for(int i=0;i<col;i++){
            int ones=0;
            for(int j=0;j<row;j++){
                if(grid[j][i]==1) ones++;
            }
            colOnes[i]=ones;
        }
        long ans=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    long r=rowOnes[i]-1;
                    long c=colOnes[j]-1;
                    ans+=r*c;
                }
            }
        }
        return ans;
    }
}