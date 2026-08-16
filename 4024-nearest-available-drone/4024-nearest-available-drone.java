class Solution {
    public int nearestDrone(int[][] drones, int[] target) {
        int n = drones.length;

        int res = -1;
        int man = Integer.MAX_VALUE;
        for(int i = 0; i < n; i++){
            int d= Math.abs(drones[i][0] - target[0]) + Math.abs(drones[i][1] - target[1]);
            
            if(d <= drones[i][2] && d < man){
                res = i;
                man = d;
        }
        }

        return res;
    }
}