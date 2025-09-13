class Solution {
public:
    vector<int> pancakeSort(vector<int>& a) {
        vector<int>b;
        for( int i=a.size();i>=1;i--){
            auto it = find(a.begin(),a.end(),i);
            int ind = distance( a.begin(),it);
            if( ind !=0){
            b.push_back(ind+1);
            reverse( a.begin(),a.begin()+ind+1);
            }
             b.push_back(i);
            reverse(a.begin(),a.begin()+i);}

            
        return b;
        
    }
};