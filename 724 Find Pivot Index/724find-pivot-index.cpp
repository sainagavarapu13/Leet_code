class Solution {
public:
    int pivotIndex(vector<int>& n) {
         vector<int>a,b,res;
        a.push_back(0);
        int sum=0;
        for( int i: n) sum+=i;
         b.push_back(sum-a.back()-n[0]);
        for(int i=1;i<n.size();i++ ){
           b.push_back(b.back()-n[i]);
            a.push_back(a.back()+n[i-1]);
        }
        for( int i=0;i<a.size();i++){
            if( a[i]==b[i]) return i;
        }
        return -1;
    }
};