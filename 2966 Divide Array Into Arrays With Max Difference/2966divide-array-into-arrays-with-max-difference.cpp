class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& n, int k) {
        sort(n.begin(),n.end());
        vector<vector<int>>a;
        for( int i=0;i<n.size();i+=3){
            vector<int>b(3);
            int x = n[i+1]-n[i] , y = n[i+2]-n[i] ,z = n[i+2]-n[i+1];
            int ans = max(x , y);
            ans = max(ans,z);
            if( ans>k) {
                a.clear();
                return a;
            }
            else{
                b[0]=n[i];
                b[1]=n[i+1];
                b[2]=n[i+2];
            }
            a.push_back(b);
        }
        return a;
    }
};