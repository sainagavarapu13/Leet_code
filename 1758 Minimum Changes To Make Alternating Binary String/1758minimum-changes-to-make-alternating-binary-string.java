class Solution {
    public int minOperations(String s) {
        Scanner sc = new Scanner( System.in);
        String a ="",b="";
        for( int i=0;i<s.length();i++){
            if( i%2==0){
                a = a+"1";
                b = b+"0";
            }else{
                 a = a+"0";
                b = b+"1";
            }
        }
        int ca =0, cb =0;
        for( int i=0;i<s.length();i++){
            if( a.charAt(i)!=s.charAt(i) ) ca++;
            if( b.charAt(i)!=s.charAt(i)) cb++;
        }
        return Math.min( ca,cb);
    }
}