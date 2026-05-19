class Solution {
public:
    int numberOfSubstrings(string a) {
        int cnt=0;
        int j=0,i=0;
        unordered_map<int , int> m;
        while( j<a.size()){
            m[a[j]]++;
            while( m.size()==3){
                m[a[i]]--;
                if( m[a[i]]==0){
                    m.erase(a[i]);
                }
                cnt+=(a.size()-j);
                i++;
            }
           j++;
        }
        return cnt;
    }
};