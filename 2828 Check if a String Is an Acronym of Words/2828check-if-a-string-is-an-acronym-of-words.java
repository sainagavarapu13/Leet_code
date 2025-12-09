class Solution {
    public boolean isAcronym(List<String> words, String s) {
        if(words.size()!=s.length()) return false;
        String a ="";
        for(String x : words){
            a += x.charAt(0);
        }
        if(a.equals(s)) return true;
        return false;
    }
}