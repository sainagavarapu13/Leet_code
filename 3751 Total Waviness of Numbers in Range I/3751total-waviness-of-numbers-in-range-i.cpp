class Solution {
public:
    int num(int n){
        vector<int>a;
        while(n){
            a.push_back(n%10);
            n=n/10;
        }
        int cnt=0;
        for(int i=1;i<a.size()-1;i++){
            if((a[i]>a[i+1]&&a[i]>a[i-1])||(a[i]<a[i+1]&&a[i]<a[i-1])){
                cnt++;
            }
        }
        return cnt;
    }
    int totalWaviness(int num1, int num2) {
        int i,cnt=0;
        for(i=num1;i<=num2;i++){
            int k=num(i);
            cnt+=k;
        }
        return cnt;
    }
};