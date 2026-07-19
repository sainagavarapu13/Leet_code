class Solution {
public:
    int booth(string s){
        string t=s+s;
        int n=s.size();
        int i=0,j=1,k=0;
        while(i<n&&j<n){
            k=0;
            while(k<n&&t[i+k]==t[j+k]) k++;
            if(k==n) break;
            if(t[i+k]>t[j+k]){
                i=i+k+1;
                if(i<=j) i=j+1;
            }
            else{
                j=j+k+1;
                if(j<=i) j=i+1;
            }
        }
        return min(i,j);
    }
    string rotateMin(string s){
        if(s.empty()) return s;
        int p=booth(s);
        return s.substr(p)+s.substr(0,p);
    }
    int minimumGroups(vector<string>& words) {
        unordered_set<string> st;
        for(string &w:words){
            string even="",odd="";
            for(int i=0;i<w.size();i++){
                if(i%2==0) even+=w[i];
                else odd+=w[i];
            }
            even=rotateMin(even);
            odd=rotateMin(odd);
            st.insert(even+"#"+odd);
        }
        return st.size();
    }
};