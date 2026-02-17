class Solution {
public:
    bool check( int val , int i){
        int sum=0;
        while( val){
            sum+=val%10;
            val/=10;
        }
        return sum==i;
    }
    int smallestIndex(vector<int>& a) {
        for( int i=0;i<a.size();i++){
            if( check(a[i],i)==1) return i;
        }
        return -1;
    }
};