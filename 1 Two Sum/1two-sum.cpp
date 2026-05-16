class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        map<int,int>m,n;
        for( int i=0;i<a.size();i++){
            m[a[i]]++;
            n[a[i]]=i;
        }
        int k=0;
        for( int i : a){
            
            m[i]--;
            if(m[t-i]!=0 ){
                return {k,n[t-i]};
            }
            k++;
        }
        return {};
    }
};