class Solution {
public:
    string largestGoodInteger(string a) {
        int i;
        int m=-1;
        string s;
        for(i=1;i<a.size()-1;i++){
            if(a[i]==a[i+1]&&a[i]==a[i-1]){
                int k=a[i]-'0';
                if(k>m){
                    m=k;
                }
            }
        }
        if(m==-1) return "";
        for(i=0;i<3;i++){
            s.push_back(m+'0');
        }
        return s;
    }
};