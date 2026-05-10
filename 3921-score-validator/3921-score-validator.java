class Solution {
    public int[] scoreValidator(String[] events) {
        int score = 0;
        int counter = 0;
        for(int i = 0;i < events.length;i++){
            if(events[i].equals("W")){
                counter++;
                if(counter == 10) break;
            }
            else if(events[i].equals("WD") || events[i].equals("NB")) score++;

            else if(events[i].charAt(0)-'0' >= 0 && events[i].charAt(0)-'0' <= 6) score += events[i].charAt(0)-'0';

        }
        
        int[] res={score, counter};
        return res;
    }
}