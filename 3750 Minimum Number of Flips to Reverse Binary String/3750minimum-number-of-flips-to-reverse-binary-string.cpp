class Solution {
public:
    int minimumFlips(int n) {
        vector<int>a;
        while(n){
            a.push_back(n%2);
            n=n/2;
        }
        int cnt=0;
        int len=a.size()-1;
        for(int i=0;i<=len;i++){
            if(a[i]!=a[len-i]) cnt++;
        }
        return cnt;
    }
};