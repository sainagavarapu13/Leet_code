class Solution {
public:
    int countGoodSubstrings(string s) {
        int k=2;
        int start=0;
        int end=k,cnt=0;
        while(end<s.size()){
            int f=0;
            for(int i=start;i<end;i++){
                for(int j=i+1;j<=end;j++){
                if(s[i]==s[j]){
                    f=1;
                    break;
                }
                }
            }
            if(f==0){ cnt++;
            }
            start++;
            end=start+2;
        }
        return cnt;
    }
};