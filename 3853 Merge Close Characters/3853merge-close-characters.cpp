class Solution {
public:
    string mergeCharacters(string s, int k) {
        while(1){
            int n = s.length();
            int a = -1;
            for(int i=0;i<n;i++){
                for(int j = i+1;j<n;j++){
                    // cout<<s[i]<<" "<<s[j]<<endl;
                    if(s[i]==s[j] && (j-i)<=k){
                        a = 1;
                        // cout<<s[j]<<endl;
                        s.erase(s.begin()+j);
                        break;
                    }
                }
                if(a==1) break;
            }
            if(a==-1) break;
        }
        return s;
    }
};