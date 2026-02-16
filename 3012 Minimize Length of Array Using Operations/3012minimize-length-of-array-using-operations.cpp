class Solution {
public:
    int minimumArrayLength(vector<int>& a) {
       int mi = *min_element(a.begin(), a.end());
        int cnt=0;
        for( int i :a){
            if( i==mi)cnt++;
            if( i%mi !=0) return 1;
        }
        return (cnt+1)/2;
    }
};