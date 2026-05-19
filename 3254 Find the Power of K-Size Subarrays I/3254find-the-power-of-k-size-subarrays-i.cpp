class Solution {
public:
    vector<int> resultsArray(vector<int>& a, int k) {
         int invalid = 0;

        for(int i = 1; i < k; i++) {
            if(a[i] - a[i-1] != 1) {
                invalid++;
            }
        }
        vector<int> ans;
        if(invalid == 0) {
            ans.push_back(a[k-1]);
        }
        else {
            ans.push_back(-1);
        }

        int start=0,end=k;
       
        while(end<a.size()){
            if(a[end]-a[end-1]!=1){
               invalid++;
            }
            if(a[start+1]-a[start]!=1){
                invalid--;
            }
            if(invalid==0){
                ans.push_back(a[end]);
            }
            else{
                ans.push_back(-1);
            }
            end++;
            start++;
        }
        return ans;
    }
};