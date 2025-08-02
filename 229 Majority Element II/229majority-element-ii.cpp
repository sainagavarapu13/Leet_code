class Solution {
public:
    vector<int> majorityElement(vector<int>& n) {
        map<int,int>a;
        for( int i : n){
            a[i]++;
        }
        int k = n.size();
        vector<int>b;
        for(auto& i:a){
            if( i.second >(k/3)){
                b.push_back(i.first);
            }
        }
      return b;
    }
};