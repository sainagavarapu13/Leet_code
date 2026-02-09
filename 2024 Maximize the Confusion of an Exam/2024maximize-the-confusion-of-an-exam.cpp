class Solution {
public:
    int slove(string a , int k,char ch){
        int ans=0;
        int start=0;
        int cnt=0;
        for(int i=0;i<a.size();i++){
        if(a[i]!=ch){
            cnt++;
        }
            while(cnt>k){
                if(a[start]!=ch) cnt--;
                start++;
            }
            ans = max(ans,i-start+1);
           
        }
        return ans;
    }
    int maxConsecutiveAnswers(string a, int k) {
        return max(slove(a,k,'T'),slove(a,k,'F'));
    }
};