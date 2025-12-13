class Solution {
    public List<String> validateCoupons(String[] code, String[] businessLine, boolean[] isActive) {
        
       List<List<String>> vec = new ArrayList<>();
        int n=code.length;


        for(int i=0;i<n;i++){
            String temp=code[i];

            if(!isActive[i] || temp.isEmpty()==true) continue;
             boolean isFlag=false;
            for(int j=0;j<temp.length();j++){
                 char c=temp.charAt(j);
                 boolean first=Character.isDigit(c);
                 boolean second=((c>='a' && c<='z') || (c>='A' && c<='Z')? true : false);
                 boolean third=(c=='_' ? true : false);


                 if(first==false && second==false &&  third==false) isFlag=true;
            }

            if(isFlag==true) continue;
 
            String v=businessLine[i];
            if(v.equals("electronics") || v.equals("grocery") || v.equals(    "pharmacy") || v.equals("restaurant")){
                 vec.add(new ArrayList<>(Arrays.asList(v, temp)));
            }
        }

        Collections.sort(vec, (a, b) -> {
    int cmp = a.get(0).compareTo(b.get(0));
    if (cmp != 0) return cmp;
    return a.get(1).compareTo(b.get(1));
});


        List<String> ds=new ArrayList<>();

        for(int i=0;i<vec.size();i++){
            ds.add(vec.get(i).get(1));
        }

        return ds;
        
    }
}