class Solution {
    public List<String> validateCoupons(String[] code, String[] businessLine, boolean[] isActive) {

        List<List<String>> vec = new ArrayList<>();
        int n = code.length;

        for (int i = 0; i < n; i++) {
            String temp = code[i];

            if (!isActive[i] || temp.isEmpty() == true)
                continue;

           boolean validCode = true;
            for (char c : code[i].toCharArray()) {
                if (!Character.isLetterOrDigit(c) && c != '_') {
                    validCode = false;
                    break;
                }
            }

            if (validCode == true){
            String v = businessLine[i];
            if (v.equals("electronics") || v.equals("grocery") || v.equals("pharmacy") || v.equals("restaurant")) {
                vec.add(new ArrayList<>(Arrays.asList(v, temp)));
            }
            }
        }

        Collections.sort(vec, (a, b) -> {
            int cmp = a.get(0).compareTo(b.get(0));
            if (cmp != 0)
                return cmp;
            return a.get(1).compareTo(b.get(1));
        });

        List<String> ds = new ArrayList<>();

        for (int i = 0; i < vec.size(); i++) {
            ds.add(vec.get(i).get(1));
        }

        return ds;

    }
}