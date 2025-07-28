class Solution {
public:
    int maxSum(vector<int>& n) {
        if( n.size()==1) return n[0];
        unordered_set<int>a;
        for( int i : n){
            a.insert(i);
        }
        int sum=0,neg=-1010;
        for( int i:a){
         if( i>0) sum+=i;
         else {
            if( i>neg) neg =i;
         }
        }
       if( sum==0){
            return neg;
       }else return sum;
    }
};