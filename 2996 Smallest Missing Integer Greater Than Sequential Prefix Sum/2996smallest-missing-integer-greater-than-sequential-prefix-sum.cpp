class Solution {
public:
    int missingInteger(vector<int>& n) {
        int sum=n[0];
        for( int i=1;i<n.size();i++){
            if( n[i]==n[i-1]+1) sum+=n[i];
            else{
                break;
            }
        }
        auto it = max_element(n.begin(),n.end());
        int m = *it;
        if( find(n.begin(),n.end(),sum) != n.end()){
            for( int i=sum+1 ; i<=m;i++){
                if( find(n.begin(),n.end(),i) == n.end()){
                    return i;
                }
            }
            return m+1;
        }
        else return sum;
    }
};