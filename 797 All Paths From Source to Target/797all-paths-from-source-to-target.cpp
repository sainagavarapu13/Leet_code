class Solution {
public:
vector<vector<int>>ans;
    void fun( vector<vector<int>>& a,vector<int>& b, int i){
        if( i==a.size()-1){
            b.push_back(i);
            ans.push_back(b);
            b.pop_back();
                return ;
        }
       for(int j:a[i] ){
      b.push_back(i);
        fun( a,b,j);
        b.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& a) {
       ans.clear();
       vector<int>b;
       fun( a,b,0);
       return ans;
    }
};