class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for( int i=0;i<s.size();i++){
            int f[27]={0};
            f[s[i]-'a']++;
            for( int j =i+1;j<s.size();j++){
                f[s[j]-'a']++;
                int mini = INT_MAX;
                int maxi = 0;
                for( int k=0;k<27;k++){
                    if( f[k]>0){
                        mini = min(mini,f[k]);
                        maxi = max(maxi,f[k]);
                    }
                }
                if( maxi !=mini){
                    sum+=(maxi-mini);
                }

            }
        }
        return sum;
    }
};