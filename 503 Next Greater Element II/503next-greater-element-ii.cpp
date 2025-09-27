class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        vector<int>c;
        for( int i=0;i<a.size();i++){
            int j =i+1;
            if( j == a.size()) j=0;
            bool f = false;
            while( j>-1){
                if( j ==i) break;
                if( j ==a.size()) {
                    j=0;
                    if( j == i) break;
                }
                if( a[i] < a[j]){
                    c.push_back(a[j]);
                    f= true;
                    break;
                }
                j++;

            }
            if( !f) c.push_back(-1);
        }
        
        return c;
    }
};