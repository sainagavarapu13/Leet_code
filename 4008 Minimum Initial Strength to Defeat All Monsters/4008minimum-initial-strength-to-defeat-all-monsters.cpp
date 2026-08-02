class Solution {
public:
    bool check(long long f , vector<int>& m,vector<long long>& b ){
        for( int i=0;i<m.size();i++){
            //f+=b[i];
            if( f+b[i]<m[i]) return false;
            f-=m[i];
            if( f<0) f=0;
        }
        return true;
    }
    long long minInitialStrength(vector<int>& m, vector<vector<int>>& b) {
       vector<long long>bon(m.size()+1,0);
       for( auto i : b){
            bon[i[0]]+=i[2];
            if( i[1]+1<m.size()){
                bon[i[1]+1]-=i[2];
            }
       }
         long long h = m[0];
       for( int i=1;i<bon.size();i++){
        bon[i]+=bon[i-1];
        if(i!=bon.size()-1)h+=m[i];
       }
       //for( int i : bon) cout<< i << " ";
       long long l = 0;
       long long ans =0;
      while(l<=h){
        long long mid = (l+h)/2;
        if( check(mid, m, bon)){
            ans = mid;
            h =mid-1;
        }else l= mid+1;
      }
        return ans;
    }
};