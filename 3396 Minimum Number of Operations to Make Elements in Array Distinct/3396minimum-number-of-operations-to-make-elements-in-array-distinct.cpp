class Solution {
public:
    int isdis(vector<int> a,int idx){
        int i;
        
        for(i=idx;i<a.size();i++){
            for(int j=i+1;j<a.size();j++){
                if(a[i]==a[j]){
                    return 0;
                }
            }
        }return 1;
    }
    int minimumOperations(vector<int>& a) {
        int i,cnt=0,idx=0;
        for(i=0;i<a.size();i++){
            if(isdis(a,idx)) return cnt;
            else{
                idx=idx+3;
                cnt++;
                isdis(a,idx);
            }
        }
        return 0;
    }
};