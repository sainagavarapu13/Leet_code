class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& n) {
       vector<int>a;
       for( int i=0;i<n.size();i++){
            set<int>x(n.begin(),n.begin()+i+1);
            set<int>y(n.begin()+i+1 , n.end());
            a.push_back(x.size()-y.size());
       }

        return a;
    }
};