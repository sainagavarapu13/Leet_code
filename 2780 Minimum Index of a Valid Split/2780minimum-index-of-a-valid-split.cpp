class Solution {
public:
    int minimumIndex(vector<int>& a) {
        map<int,int>m;
        int num , freq;
        int len = a.size();
        for(auto& i:a){
            m[i]++;
        }
        for(auto& [n,c]:m){
            if(c>len/2){
                num = n;
                freq = c;
            }
        }
        int cnt=0;
        for(int i=0;i<a.size();i++){
            int sub_len = i+1;
            int rem_len = len-sub_len;
            if(a[i]==num){
                freq--;
                cnt++;
            }
            if(freq>rem_len/2 && cnt>sub_len/2) return i;
        }
        return -1;
    }
};