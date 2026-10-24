class Solution {
    public int countDaysTogether(String arriveAlice, String leaveAlice, String arriveBob, String leaveBob) {

        int[] months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int m1 = Integer.parseInt(arriveAlice.substring(0, 2));
        int m2 = Integer.parseInt(leaveAlice.substring(0, 2));
        
        int d1 = Integer.parseInt(arriveAlice.substring(3));
        int d2 = Integer.parseInt(leaveAlice.substring(3));


        int m3 = Integer.parseInt(arriveBob.substring(0, 2));
        int m4 = Integer.parseInt(leaveBob.substring(0,2));

        int d3 = Integer.parseInt(arriveBob.substring(3));
        int d4 = Integer.parseInt(leaveBob.substring(3));




        int newMonth1 = 0;
        int newDay1 = 0;
        
        if(m1 >= m3){
            newMonth1 = m1;

            if(m1 == m3){
                if(d1 < d3) newDay1 = d3;
                else newDay1 = d1;
            }
           else newDay1 = d1;
        }
        else {
            newMonth1 = m3;
            newDay1 = d3;
        }

        int newMonth2 = 0;
        int newDay2 = 0;
        if(m2 >= m4){
            newMonth2 = m4;

            if(m2 == m4){
                if(d2 > d4){
                    newDay2= d4;
                }
                else newDay2 = d2;
                
            }
            else newDay2 = d4;
        }
        else {
            newMonth2 = m2;
            newDay2 = d2;
        }

        System.out.println(newMonth1 + " " + newDay1 + " " + newMonth2 + " " + newDay2);
       if(newMonth1 > newMonth2) return 0;

       if(newMonth1 == newMonth2) {
        if(newDay1 > newDay2) return 0;
         return newDay2 - newDay1 + 1;
       }
        
        int days = 0;
        for(int i = newMonth1; i < newMonth2;i++){
            if(i == newMonth1){
                days += (months[i - 1] - newDay1 + 1);
            }

            else days += months[i - 1];
        }

        days += newDay2;
        
        return days;
    }
}