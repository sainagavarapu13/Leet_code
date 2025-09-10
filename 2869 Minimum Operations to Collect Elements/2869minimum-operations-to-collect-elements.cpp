class Solution {
public:
    int minOperations(vector<int>& a, int k) {
        int n = a.size();
        set<int> s;
        for(int i = n-1; i >= 0; i--){
            if(a[i] <= k) s.insert(a[i]);
            if(s.size() == k) return a.size()-i;
        }
       
        return a.size();
    }
};
