class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
        if( c.size()%2==1) return {};
        unordered_map<int , int>a;
        for( int i:c) a[i]++;
        sort(c.begin(),c.end());
        vector<int>org;
        for(int i=0;i<c.size();i++){
            if( a[c[i]]==0) continue;
            if( a[2*c[i]]==0) return{};
                a[c[i]]--;
                a[2*c[i]]--;
                org.push_back(c[i]);
            
        } 
        return org;
    }
};