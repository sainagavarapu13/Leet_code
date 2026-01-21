class Solution {
public:
    int find(int n){
        string a;
        int cnt=0;
        while(n){
            if(n%2==1){
                cnt++;
            }
            else break;
            n/=2;
        }
        return cnt-1;
    }
    vector<int> minBitwiseArray(vector<int>& a) {
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            int cnt = find(a[i]);
            int l = pow(2,cnt);
            int k = a[i]-l;
           if(cnt!=-1)
            ans.push_back(k);
            else ans.push_back(-1);
        }
        return ans;
    }
};