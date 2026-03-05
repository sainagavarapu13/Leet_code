class Solution {
    public int minOperations(String s) {
        char ch = '0';
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)!=ch){
                cnt++;
            }
            if(ch=='0'){
                ch='1';
            }
            else ch='0';
        }
        int c=0;
        ch='1';
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)!=ch){
                c++;
            }
            if(ch=='0'){
                ch='1';
            }
            else ch='0';
        }
        return Math.min(cnt,c);
    }
}