class Solution {
public:
    vector<bool>s;
    int se = 0;
    void fun(){
        if( se) return;
        s.assign(3*1e5+1,1);
        s[0] = s[1] = 0;
        for( int i=2;i*i<=3*1e5+1;i++){
            if( s[i]){
                for( int j = i*i;j<3*1e5+1;j+=i){
                    s[j]=0;
                }
            }
        }
        se=1;

    }
    int maximumPrimeDifference(vector<int>& a) {
        fun();
        int val=-1;
        for(int i=0;i<a.size();i++){
            if(s[a[i]]){
                val =i;
                break;
            }
        }
        for(int i=a.size()-1;i>=0;i--){
            if(s[a[i]]){
               val = i-val;
                break;
            }
        }
        return val;
    }
};