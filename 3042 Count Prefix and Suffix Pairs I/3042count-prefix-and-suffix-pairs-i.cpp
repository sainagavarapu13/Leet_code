class Solution {
public:
    bool check(string a ,string b){
        int i=0;
        if(a.size()>b.size()) return false;
        while(i<a.size()){
            if(a[i]!=b[i]) return false;
            i++;

        }
        i=b.size()-a.size();
        int k=0;
        while(i<b.size()){
            if(a[k++]!=b[i]) return false;
            i++;
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& a) {
        int i,j;
        int cnt =0;
        for(i=0;i<a.size();i++){
            for(j=i+1;j<a.size();j++){
                if(check(a[i],a[j])) cnt++;
            }
        }
        return cnt;
    }
};