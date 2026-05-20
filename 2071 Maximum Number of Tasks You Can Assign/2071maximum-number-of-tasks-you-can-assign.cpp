class Solution {
public:
    bool cando(int k , vector<int>& t, vector<int>& w, int p, int s){
        multiset<int>m;
        int u = 0;
        for(int i = w.size() - k; i < w.size(); i++) m.insert(w[i]);
        for(int j = k - 1; j >= 0; j--){
            int task = t[j];
            auto it = prev(m.end());
            if( *it >= task){
                m.erase(it);
            }else{
                    if(!p) return 0;
                    else{
                       auto need = m.lower_bound(task-s);
                       if( need == m.end())
                       return 0;
                       m.erase(need);
                       p--;
                    }
            }
        }
        return 1;
    }
    int maxTaskAssign(vector<int>& t, vector<int>& w, int p, int s) {
        sort( w.begin(), w.end());
        sort( t.begin(), t.end());
        int l=0,h = min( t.size(), w.size());
        int ans =0;
        while( l<=h){
            int mid = ( l+h)/2;
            if( cando(mid , t,w,p,s)){
                ans = mid;
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
        return ans;
    }
};