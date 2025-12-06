class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& s) {
        int cnt=0;
        for( int i=0;i<s.size();i++){
            int f=0;
            for(int j=0;j<st.size();j++){
                if( s[i]==st[j]){
                    cnt++;
                    f=1;
                    st[j]=-1;
                    break;
                }
            }
            if( f==0) break;
        }
        return st.size()-cnt;
        
    }
};