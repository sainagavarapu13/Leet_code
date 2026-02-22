class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& a, int k) {
        map<int,int>m;
        for( int i:a){
            m[i]++;
        }
        vector<int>p;
        for( auto [ x,y]:m){
            p.push_back(y);
        }
        sort( p.begin(),p.end());
        int cnt= p.size();
        for( int i=0;i<p.size();i++){
           if( k>=p[i]){
            k-=p[i];
            cnt--;
           }else{
            break;
           }
        

        }
        return cnt;

    }
};