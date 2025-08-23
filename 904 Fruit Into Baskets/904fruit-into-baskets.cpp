class Solution {
public:
    int totalFruit(vector<int>& f) {
        int m = 0;
        if(f.size() <= 2) return f.size();
        
        map<int , int >a;
        int i = 0, j = 0;
        
        while(j< f.size()) {
            a[f[j]]++;
            while( a.size()>2){
                a[f[i]]--;
               if( a[f[i]]==0) a.erase(f[i]);
                i++;
            }
                m = max(m, j - i+1 );
                j++;
        }
        return m;
    }
};