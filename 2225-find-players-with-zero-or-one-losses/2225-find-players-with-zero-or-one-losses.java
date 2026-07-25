class Solution {
    public List<List<Integer>> findWinners(int[][] matches) {
        
        Set<Integer> winner = new HashSet<>();
        Set<Integer> looser = new HashSet<>();
        Set<Integer> looser1 = new HashSet<>();
        Set<Integer> rem = new HashSet<>();
        for(int i = 0; i < matches.length; i++){
            winner.add(matches[i][0]);
            looser1.add(matches[i][1]);
            if(looser.contains(matches[i][1])) {
                looser.remove(matches[i][1]);
                rem.add(matches[i][1]);
                continue;
            }
            looser.add(matches[i][1]);
            if(rem.contains(matches[i][1])) looser.remove(matches[i][1]);

        }


            List<List<Integer>>res = new ArrayList<List<Integer>>();

             List<Integer>temp1 = new ArrayList<>();
             List<Integer>temp2 = new ArrayList<>();

             for(Integer i : winner){
                if(looser1.contains(i)) continue;
                temp1.add(i);
             }

             for(Integer j : looser){
                temp2.add(j);
             }

            Collections.sort(temp2);
            Collections.sort(temp1);
            res.add(temp1);
            res.add(temp2);
            return res;
    }
}