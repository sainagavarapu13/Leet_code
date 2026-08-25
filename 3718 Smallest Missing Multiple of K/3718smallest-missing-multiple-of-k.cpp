class Solution {
public:
    int missingMultiple(vector<int>& a, int k) {
        int i,p=0;
        while(1){
                p+=k;
            if(find(a.begin(),a.end(),p)==a.end()){
                return p;
            }
        
        }
        return p;
    }
};