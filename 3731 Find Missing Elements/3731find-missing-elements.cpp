class Solution {
public:
    vector<int> findMissingElements(vector<int>& a) {
        sort(a.begin(),a.end());
        vector<int>res;
        int k=0;
        for(int i=a[0];i<=a.back();i++){
            if( k<a.size() && i!= a[k]){
                res.push_back(i);
            }
           else k++;
        }
        return res;
    }
};